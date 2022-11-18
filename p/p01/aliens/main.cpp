/****************************************************************************
 Yihsiang Liow
 Copyright
 ****************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <sstream>

#include "Includes.h"
#include "Constants.h"
#include "compgeom.h"
#include "Spaceship.h"
#include "Surface.h"
#include "Event.h"
#include "Alien.h"




void test_Alien()
{
    const int W = 800, H =600;  
    Surface surface(W, H);
    Event event;

    const int RATE = 1000/30;
    const int row = 5;
    const int col = 20;

    //player
    Spaceship spaceship;
    spaceship.image = Image("images/galaxian/GalaxianGalaxip.gif");
    spaceship_rect.x = W / 2 - spaceship_rect.w /2;
    spaceship_rect.y = H - 50;

    Lazer lazer;
    lazer.image = Image("images/galaxian/Lazer.png");

    //Aliens
    Alien alien[row][col];

    Image i_[4] = {Image("images/galaxian/GalaxianAquaAlien.gif"),
                   Image("images/galaxian/GalaxianPurpleAlien.gif"),
                   Image("images/galaxian/GalaxianRedAlien.gif"),
                   Image("images/galaxian/GalaxianFlagship.gif")};
    
    for(int i = 0; i < row ; i ++)
    {
        for(int j = 0; j < col; j++)
        {
            alien[i][j].x() = alien[i][j].rect.w * j;
            alien[i][j].rect.y = (alien[i][j].rect.h) * i;
            alien[i][j].image = i_[i%4];
        }
    }
    
    while (1)
    {
        int start = getTicks();
        if (event.poll() && event.type() == QUIT) break;

        KeyPressed keypressed = get_keypressed();

        if (keypressed[LEFTARROW])
        {
            if (spaceship_rect.x == 0)
            {
                spaceship_rect.x = 0;
            }
            else
            {
                spaceship_rect.x -= 2;
            }
        }
        if (keypressed[RIGHTARROW])
        {
            if (spaceship_rect.x == W - spaceship_rect.w)
            {
                spaceship_rect.x = W - spaceship_rect.w ;
            }
            else
            {
                spaceship_rect.x += 2;
            }
        }

        if(lazer_is_alive)
        {
            lazer_rect.y -= 5;
            if(lazer_rect.y < -lazer_rect.h)
                lazer_is_alive = false;
        }
                
        if (keypressed[SPACE])
        {
            if(!lazer_is_alive)
            {
                lazer_rect.x = spaceship_rect.x + spaceship_rect.w / 2 - lazer_rect.w / 2;
                lazer_rect.y = spaceship_rect.y - lazer_rect.h;
                lazer_is_alive = true;
            }
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                alien[i][j].rect.x += alien[i][j].dx;
            }
        }

        //Screen Collision
        if ((alien[0][col].rect.x + (alien[0][col].rect.w * col)) >= W) // rect.x + rect.w >= W
        {
            // CASE: right side of image touches the right side of surface
            //dx = -speed;
            for(int i = 0; i < row; i++)
            {    
                for(int j = 0; j < col; j++)
                {
                    alien[i][j].dx += -alien[i][j].speed;
                }
            }
        }
        else if (alien[0][0].rect.x <= 0) // rect.x <= 0
        {
            for(int i = 0; i < row; i++)
            {    
                for(int j = 0; j < col; j++)
                {
                    alien[i][j].dx += alien[i][j].speed;
                }
            }
        }
        
        surface.lock();
        surface.fill(BLACK);

        // blit image at rect on surface

        for(int i = 0; i < row; i++)
        {    
            for(int j = 0; j < col; j++)
            {
                surface.put_image(alien[i][j].image, alien[i][j].rect);
            }
        }

        surface.put_image(spaceship_image, spaceship_rect);
        
        if(lazer_is_alive)
            surface.put_image(lazer_image, lazer_rect);
       
        surface.unlock();
        surface.flip();

        //Frame Rate Manager
        int end = getTicks();
        int dt = RATE - (end - start);
        if(dt > 0) delay(dt);
        std::cout << dt << '\n';
    }
    return;
}


/*****************************************************************************
For our programs involving graphics and sound, the template is this:

int main(int argc, char* argv[])
{
    ... PROGRAM ...

    return 0;
}

Our main() is made up of calling various functions. This is the first time you
are actually seeing the *code* of functions. Before this, you have been 
*using* functions, i.e. *calling* the functions.

For instance the first function call is

	test_event();

When you run this program, the program will execute a function call to 
test_event(). This means that the program will look for "text_event" and 
execute the code until it sees the statement "return". Executing return
will cause the program to go back to where it came from.

After running the program, comment out the call to test_event(), uncomment
the call to test_pixel() and run the program. Etc.
*****************************************************************************/
int main(int argc, char* argv[])
{
    test_Alien();
       
    return 0;
}

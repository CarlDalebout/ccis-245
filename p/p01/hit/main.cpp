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
#include "Surface.h"
#include "Event.h"
#include "Alien.h"
#include "Spaceship.h"
#include "Lazer.h"

void test_Alien()
{
    Surface surface(W, H);
    Event event;

    const int RATE = 1000/30;
    const int row = 5;
    const int col = 15;

    
    Image i_[6] = {Image("images/galaxian/GalaxianGalaxip.gif"),
                   Image("images/galaxian/Lazer.png"),
                   Image("images/galaxian/GalaxianRedAlien.gif"),
                   Image("images/galaxian/GalaxianAquaAlien.gif"),
                   Image("images/galaxian/GalaxianPurpleAlien.gif"),
                   Image("images/galaxian/GalaxianFlagship.gif")};
    
    Spaceship spaceship;
    
    spaceship.rect.x = W / 2 - spaceship.rect.w / 2;
    spaceship.rect.y = H - 50;
    
    Lazer lazer;

    Alien alien;

    alien.rect.x = W / 2 - alien.rect.w / 2;
    
    while (1)
    {
        int start = getTicks();
        if (event.poll() && event.type() == QUIT) break;

        KeyPressed keypressed = get_keypressed();

        if (keypressed[LEFTARROW])
        {
            if (spaceship.rect.x == 0)
            {
                spaceship.rect.x = 0;
            }
            else
            {
                spaceship.rect.x -= spaceship.speed;
            }
        }
        if (keypressed[RIGHTARROW])
        {
            if (spaceship.rect.x == W - spaceship.rect.w)
            {
                spaceship.rect.x = W - spaceship.rect.w ;
            }
            else
            {
                spaceship.rect.x += spaceship.speed;
            }
        }

        if(lazer.alive)
        {
            lazer.rect.y -= 5;
            if(lazer.rect.y < -lazer.rect.h)
                lazer.alive = false;
        }
                
        if (keypressed[SPACE])
        {
            if(!lazer.alive)
            {
                lazer.rect.x = spaceship.rect.x + spaceship.rect.w / 2 - lazer.rect.w / 2;
                lazer.rect.y = spaceship.rect.y - lazer.rect.h;
                lazer.alive = true;
            }
        }

        
        surface.lock();
        surface.fill(BLACK);

        // blit image at rect on surface
        //surface.put_image(alien.image, alien.rect);
         
        //surface.put_image(spaceship.image, spaceship.rect);
        
        if(lazer.alive)
              surface.put_image(lazer.image, lazer.rect);
       
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

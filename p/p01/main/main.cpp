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
#include "Army.h"
#include "Spaceship.h"
#include "Lazer.h"

void game()
{
    Surface surface(W, H);
    Event event;

    const int RATE = 1000/30;
    const int Collomes = 13;
    const int Rows = 6;
    
    Spaceship spaceship;
    Army army;

    spaceship.x = W/2 - spaceship.w/2;
    spaceship.y = H - spaceship.h;
    
    while (1)
    {
        int start = getTicks();
        if (event.poll() && event.type() == QUIT) break;

        KeyPressed keypressed = get_keypressed();

        //move objects
        spaceship.move(keypressed);
        spaceship.move_lazers();
        //army.move();
        
        // check collisions
        for(int i = 0; i < spaceship.Ammo.size(); ++i)
        {
            for(int j = 0; j < Collomes; ++j)
            {
                for(int k = 0; k < Rows; ++k)
                {
                    if(spaceship.Ammo[i].collision(alien[j][k])
                       && alien[j][k].alive)
                    {
                        std::cout << "Collision with Ammo" << i << ' ';
                        alien[j][k].alive = false;
                        spaceship.erase(i);//erase lazer from ammo vector
                    }
                }
            }
        }

        
        surface.lock();
        surface.fill(BLACK);

        // blit image at rect on surface

        for(int i = 0; i < Collomes; ++i)
        {
            for(int j = 0; j < Rows; ++j)
            {
                if(alien[i][j].alive)
                    surface.put_image(Alien::image[j%4], alien[i][j].rect());
            }
        }
        surface.put_image(spaceship.image, spaceship.rect());

        for(int i = 0; i < spaceship.Ammo.size(); ++i)
        {
            surface.put_image(Lazer::image, spaceship.Ammo[i].rect());
        }
        
        surface.unlock();
        surface.flip();

        //Frame Rate Manager
        int end = getTicks();
        int dt = RATE - (end - start);
        if(dt > 0) delay(dt);
        // std::cout << dt << ' ' << Spaceship::Fired_Lazer << '\n';
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
    game();
       
    return 0;
}

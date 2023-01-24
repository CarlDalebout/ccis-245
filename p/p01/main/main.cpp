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

struct Star
{
    int x;
    int y;
    int r;
    int dx;
    int dy;
    int R;
    int G;
    int B;
};

void game()
{
    Surface surface(W, H);
    Event event;

    const int RATE = 1000/30;
    const int Columns = 13;
    const int Rows = 6;
    const int N = 200;
    
    Spaceship spaceship;
<<<<<<< HEAD
    Army army(Rows, Columns);

     Star star[N];

        for(int i = 0 ; i < N; i++)
        {
            star[i].x = rand() % W;
            star[i].y = rand() % H;
            star[i].r = rand() % 3 + 2;
            star[i].dx = 0;
            star[i].dy = rand() % 3 + 1;
            switch (star[i].dy)
            {
                case 1:
                    star[i].R = rand() % 70 + 50;
                    star[i].G = star[i].R;
                    star[i].B = star[i].R;
                    star[i].r = 2;
                    break;
                case 2:
                    star[i].R = rand() % 150 + 50;
                    star[i].G = star[i].R;
                    star[i].B = star[i].R;
                    star[i].r = rand() % 2 + 2;
                case 3:
                    star[i].R = rand() % 200 + 55;
                    star[i].G = star[i].R;
                    star[i].B = star[i].R;
                    star[i].r = rand() % 3 + 3;
            }
            
        }
=======
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c

    std::cout << "Creating spaceship\n";
    
    Alien alien[Rows][Columns];

    std::cout << "Creating alians and spaceship\n";
    
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
<<<<<<< HEAD
        army.move();
        army.fire();
        army.move_lazers();

         for(int i = 0; i < N; i++)
            { 
                star[i].y += star[i].dy;
                if(star[i].y > H + star[i].r)
                {
                    star[i].y = 0;
                }
            }
=======
        //alien.move();
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
        
        // check collisions
        for(int i = 0; i < Columns; ++i)
        {
<<<<<<< HEAD
            for(int j = 0; j < Columns; ++j)
=======
            for(int j = 0; j < Rows; ++j)
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
            {
                for(int k = 0; k < spaceship.Ammo.size(); ++k)
                {
<<<<<<< HEAD
                    if(spaceship.Ammo[i].collision(army.army[j][k])
                       && army.army[j][k].alive)
                    {
                        //std::cout << "Collision with Ammo" << i << ' ';
                        army.army[j][k].alive = false;
=======
                    if(spaceship.Ammo[k].collision(alien[i][j])
                       && alien[i][j].alive)
                    {
                        alien[j][k].alive = false;
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
                        spaceship.erase(i);//erase lazer from ammo vector
                    }
                }
            }
        }
<<<<<<< HEAD

        for(int i = 0; i < army.Ammo.size(); ++i)
        {
            if(army.Ammo[i].collision(spaceship))
            {
                exit(0);
            }
        }

=======
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
        
        surface.lock();
        surface.fill(BLACK);

        // blit image at rect on surface

<<<<<<< HEAD
        for(int i = 0; i < N; i++)
            {
                surface.put_circle(star[i].x, star[i].y, star[i].r, star[i].R, star[i].G, star[i].B);
            }

=======
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
        for(int i = 0; i < Columns; ++i)
        {
            for(int j = 0; j < Rows; ++j)
            {
<<<<<<< HEAD
                if(army.army[i][j].alive)
                    surface.put_image(Alien::image[j%4], army.army[i][j]);
=======
                if(alien[i][j].alive)
                    surface.put_image(Alien::image[j%4], army.alien[i][j]);
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
            }
        }
        surface.put_image(spaceship.image, spaceship.rect());

        for(int i = 0; i < spaceship.Ammo.size(); ++i)
        {
            surface.put_image(Lazer::image, spaceship.Ammo[i].rect());
        }

        for(int i = 0; i < army.Ammo.size(); ++i)
        {
            surface.put_image(Lazer::image, army.Ammo[i].rect());
        }
        
        surface.unlock();
        surface.flip();

        //Frame Rate Manager
        int end = getTicks();
        int dt = RATE - (end - start);
        if(dt > 0) delay(dt);
        std::cout << dt << ' ' << Spaceship::Fired_Lazer << '\n';
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

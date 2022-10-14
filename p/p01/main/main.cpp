/*******************************************************
Carl Dalebout
*******************************************************/
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

void star_init(Star & star, int x, int y, int r, int dx, int dy)
{
    star.x = rand() % W;
    star.y = rand() % H;
    star.r = rand() % 3 + 2;
    star.dx = 0;
    star.dy = rand() % 3 + 1;
    switch (star.dy)
    {
        case 1:
            star.R = rand() % 70 + 50;
            star.G = star.R;
            star.B = star.R;
            star.r = 2;
            break;
        case 2:
            star.R = rand() % 150 + 50;
            star.G = star.R;
            star.B = star.R;
            star.r = rand() % 2 + 2;
        case 3:
            star.R = rand() % 200 + 55;
            star.G = star.R;
            star.B = star.R;
            star.r = rand() % 3 + 3;
    }
}

void test()
{
    
    Surface surface(W, H); // W = 640, H = 480
    Event event;

    const int N = 200;
    const int RATE = 1000 / 30;
    
    Star star[N];

    for(int i = 0; i < N; i++)
    {
        star_init(star[i], rand() % W, rand() % H, rand() % 3 + 2, 0, rand() % 3 + 1);
    }

    while(1)
    {
        int start = getTicks();
        if(event.poll() && event.type() == QUIT) break;

        KeyPressed keypressed = get_keypressed();

        //Check inputs
        

        //Move all objects
        for(int i = 0; i < N; i++)
        {
            star[i].y += star[i].dy;
            if(star[i].y > H + star[i].r)
            {
                star[i].y = 0;
            }
        }

        // Collision detection

        // Collision resolution

        //Drawing
        surface.lock();
        surface.fill(BLACK);

        for(int i = 0; i < N; i++)
        {
            surface.put_circle(star[i].x, star[i].y, star[i].r, star[i].R, star[i].G, star[i].B);
        }

        surface.unlock();
        surface.flip();

        //Frame Rate Manager
        int end = getTicks();
        int dt = RATE - (end - start);
        if(dt > 0) delay(dt);
        std::cout << dt << '\n';
        
    }
}

int main()
{
    test();
    return 0;
}

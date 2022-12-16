/******************************************************
Carl Dalebout
File: Alien.cpp


******************************************************/
#include <iostream>
#include "Alien.h"
#include "Lazer.h"

Image Alien::image[4] =
{
    Image("images/galaxian/GalaxianAquaAlien.gif"),
    Image("images/galaxian/GalaxianRedAlien.gif"),
    Image("images/galaxian/GalaxianPurpleAlien.gif"),
    Image("images/galaxian/GalaxianFlagship.gif")
};

void Alien::move()
{
    
    x += dx;
    if (x < 0)
    {
        x = 0;
        dx = speed;
    }
    if (x + w > W)
    {
        x = W - w ;
        dx = -speed;
    }
}

/******************************************************
Carl Dalebout
File: Alien.cpp


******************************************************/
#include <iostream>
#include "Alien.h"
#include "Lazer.h"

Image Alien::AquaAlien_Image(Image("images/galaxian/GalaxianAquaAlien.gif"));
Image Alien::RedAlien_Image(Image("images/galaxian/GalaxianRedAlien.gif"));
Image Alien::PurpleAlien_Image(Image("images/galaxian/GalaxianPurpleAlien.gif"));
Image Alien::FlagshipAlien_Image(Image("images/galaxian/GalaxianFlagship.gif"));
int Alien::fired_lazers(0);


void Alien::move()
{
    rect.x += dx_;
    if (rect.x < 0)
    {
        rect.x = 0;
        dx_ = speed_;
    }
    if (rect.x + rect.w > W)
    {
        rect.x = W - rect.w ;
        dx_ = -speed_;
    }
}

/***************************************
Carl Dalebout

***************************************/
#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
#include "Rect.h"
#include "Image.h"

class Alien
{
public:
    Alien(Image i = Image("images/galaxian/GalaxianAquaAlien.gif"),
          int  s = 3,
          int  x = 0,
          int  y = 0,
          bool h = 0)
        : image(i), rect(i.getRect()), speed(s), dx(x), dy(y), hit(0)
    {}

    void move();
    void run();
    
    Image image;
    Rect  rect;
    int   speed, dx, dy;
    bool  hit;
};

#endif

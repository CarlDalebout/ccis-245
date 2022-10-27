/***************************************
Carl Dalebout

***************************************/
#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include "Rect.h"
#include "Image.h"

class Spaceship
{
public:
    Spaceship(Image i = Image("images/galaxian/GalaxianGalaxip.gif"),
          int s = 5,
          int x = 0,
          int y = 0)
        : image(i), rect(i.getRect()), speed(s), dx(x), dy(y)
    {}
    
    Image image;
    Rect  rect;
    int   speed, dx, dy;
};

#endif

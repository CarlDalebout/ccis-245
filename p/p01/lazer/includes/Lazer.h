/***************************************
Carl Dalebout

***************************************/
#ifndef LAZER_H
#define LAZER_H

#include <iostream>
#include "Rect.h"
#include "Image.h"

class Lazer
{
public:
    Lazer(Image i = Image("images/galaxian/Lazer.png"),
          int s = 3,
          int x = 0,
          int y = 0)
        : image(i), rect(i.getRect()), speed(s), dx(x), dy(s)
    {}
    
    Image image;
    Rect  rect;
    int   speed, dx, dy;
};

#endif

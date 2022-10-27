/***************************************
Carl Dalebout

***************************************/
#ifndef Lazer_H
#define Lazer_H

#include <iostream>
#include "Rect.h"
#include "Image.h"

class Lazer
{
public:
  Lazer(Image i = Image("images/galaxian/Lazer.png"),
        int s = 5,
        int x = 0,
        int y = 0,
        bool a = 0)
      : image(i), rect(i.getRect()), speed(s), dx(x), dy(y), alive(a)
    {}
    
    Image image;
    Rect  rect;
    int   speed, dx, dy;
    bool alive;
};

#endif

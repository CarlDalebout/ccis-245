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
        bool a = 0,
        bool h = 0,
        bool e = 0)
      : image(i), rect(i.getRect()), speed(s), dx(x), dy(y), alive(a), hit(h), enemey(e)
    {}
    
    Image image;
    Rect  rect; // area is rect.w * rect.h
    int   speed, dx, dy;
    bool alive, hit, enemey;
};

#endif

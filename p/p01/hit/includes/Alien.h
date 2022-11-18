/***************************************
Carl Dalebout

***************************************/
#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
#include "Includes.h"
#include "Constants.h"
#include "compgeom.h"
#include "Event.h"
#include "Rect.h"
#include "Image.h"


class Alien
{
public:
    Alien(int   s = 5,
          int   x = 0,
          int   y = 0)
        :rect_(AquaAlien_Image.getRect()),
         speed_(s), dx_(s), dy_(y),
         alive_(1)
    {}

    int  x() const {return rect.x;}
    int &x()       {return rect.x;}
    int  y() const {return rect.y;}
    int &y()       {return rect.y;}
    int  w() const {return rect.w;}
    int  h() const {return rect.h;}
    void move();

//private:
    static Image AquaAlien_Image;
    static Image RedAlien_Image;
    static Image PurpleAlien_Image;
    static Image FlagshipAlien_Image;
    static int fired_lazers;
    Rect  rect_; // area is rect.w * rect.h
    int   speed_, dx_, dy_;
    bool  alive_;
};

#endif

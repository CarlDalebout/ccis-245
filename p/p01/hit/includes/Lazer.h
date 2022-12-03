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
Lazer(int s = 5,
      int x = 0,
      int y = 0)
    :rect_(image.getRect()),
     speed_(s), dx_(x), dy_(y),
     enemey_(0)
    {}
    int      x() const {return rect_.x;}
    int     &x()       {return rect_.x;}
    int      y() const {return rect_.y;}
    int     &y()       {return rect_.y;}
    int      w() const {return rect_.w;}
    int      h() const {return rect_.h;}
    
    int    top() const {return rect_.y;}
    int bottom() const {return rect_.y + rect_.h;}
    int   left() const {return rect_.x;}
    int  right() const {return rect_.x + rect_.w;}

    bool collison(Rect &) const;

//private:
    static Image image;
    Rect  rect_; // area is rect_.w * rect_d.h
    int   speed_, dx_, dy_;
    bool  enemey_;
};

#endif

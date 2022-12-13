/***************************************
Carl Dalebout

***************************************/
#ifndef Lazer_H
#define Lazer_H

#include <iostream>
#include "Rect.h"
#include "Image.h"

class Lazer: public Rect
{
public:
Lazer(int s = 5,
      int x = 0,
      int y = 0)
    :Rect(image.getRect()),
     enemey_(0)
    {}
    
//private:
    static Image image;
    bool  enemey_;
};

#endif

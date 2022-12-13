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


class Alien: public Rect
{
public:
    Alien()
        :Rect::Rect(Alien::image[0].getRect()),
        alive(1)
    {}

//private:
    static Image image[4];
    static int fired_lazers;
    bool  alive;
};

#endif

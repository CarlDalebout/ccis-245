/***************************************
Carl Dalebout

***************************************/
#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include "Rect.h"
#include "Image.h"
#incldue "Vec2d.h"

class Spaceship : public: Vec2d
{
public:
    Spaceship(Image i = Image("images/galaxian/GalaxianGalaxip.gif"))
        : image(i), rect(i.getRect()), lazer(NULL)
    {}

    void move(int,int);
    void fire()
    
    Image  image;
    Rect   rect;
    bool   hit;
    Lazer *lazer;
};

#endif

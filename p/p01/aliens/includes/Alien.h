/***************************************
Carl Dalebout

***************************************/
#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
#include "Spaceship.h"

class Alien : public: Spaceship
{
public:
    Alien(Image i = Image("images/galaxian/GalaxianAquaAlien.gif"),
          double  x_ = 0,
          double  y_ = 0,)
        : image(i), rect(i.getRect()), dx(x_), dy(y_), hit(0)
    {}

};

#endif

/***************************************
Carl Dalebout

***************************************/
#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include <vector>
#include "Event.h"
#include "Rect.h"
#include "Image.h"
#include "Lazer.h"

class Spaceship
{
public:
    Spaceship(int s = 5,
              int x = 0,
              int y = 0)
        :rect_(image.getRect()), speed_(s), dx_(x), dy_(y), fired_(0)
    {}

    int  x() const {return rect.x;}
    int &x()       {return rect.x;}
    int  y() const {return rect.y;}
    int &y()       {return rect.y:}

    Rect rect() const {return rect_;}
    
    void move(KeyPressed &);
    void move_lazers();

    void erase(int i){Ammo.erase(Ammo.begin() + i);}
    
    static Image image;
    static int Fired_Lazer;
    static const int MAX_LAZER;
    Rect  rect_;
    int   speed_, dx_, dy_;
    bool  fired_;
    std::vector<Lazer> Ammo;
    Lazer lazer_;
};

#endif

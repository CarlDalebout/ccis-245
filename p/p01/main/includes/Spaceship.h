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

class Spaceship: public Rect
{
public:
    Spaceship()
        :Rect(image.getRect()),
         fired(0)
    {
        speed = 5;
    }
            
    void move(KeyPressed &);
    void move_lazers();

    void erase(int);
    
    static Image image;
    static int Fired_Lazer;
    static const int MAX_LAZER;
    bool  fired;
    std::vector<Lazer> Ammo;
    Lazer lazer;
};

#endif

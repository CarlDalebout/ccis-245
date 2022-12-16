/***************************************
Carl Dalebout

***************************************/
#ifndef ARMY_H
#define ARMY_H

#include <iostream>
#include <vector>
#include <string>
#include "Alien.h"
#include "Lazer.h"

class Army: public Alien
{
public:
    Army(int r, int c)
        :Row(r), Column(c)
    {
        army.resize(Column);
        for(int i = 0; i < Column; ++i)
            army[i].resize(Row);
        
        for(int i = 0; i < Column; ++i)
        {
            for(int j = 0; j < Row; ++j)
            {
                army[i][j].x = army[0][0].w * i + army[0][0].w/2;
                army[i][j].y = army[0][0].h * j + army[0][0].h/2;
            }
        }
    }               
    
    
    void move();

    void fire();

    void move_lazers();
        
    int Row, Column;
    static int Fired_Lazer;
    static const int MAX_LAZER;
    std::vector<Lazer> Ammo;
    Lazer lazer;
    std::vector< std::vector < Alien > > army;
    };

std::ostream & operator<<(std::ostream & cout, const Army & army);

#endif

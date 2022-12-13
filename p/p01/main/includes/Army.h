/***************************************
Carl Dalebout

***************************************/
#ifndef ARMY_H
#define ARMY_H

#include <iostream>
#include "Alien.h"

class Army: public Alien
{
public:
    Army(int r, int c)
        :Row(r), Column(c)
    {
        army.resize(Column);
        for(int i = 0; i < Column; ++i)
            army[i].resize(Row);

        int start_x = W/2 - (alien[0][0].w * i) + (Offset * (Row - 1)
        for(int i = 0; i < column; ++i)
        {
            for(int j = 0; i < Row; ++j)
            {
                army[i][j].x = 
            }
        }
    }

    void move()
    {
        
    }

    const static int Offset;
    int Row, Column;
    std::vector< std::vector < Alien > > army;
}

#endif

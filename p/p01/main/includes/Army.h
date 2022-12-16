/***************************************
Carl Dalebout

***************************************/
#ifndef ARMY_H
#define ARMY_H

#include <iostream>
#include <vector>
#include "Alien.h"

class Army: public Alien
{
public:
    Army(int r, int c)
        :Row(r), Column(c)
    {
        alien.resize(Column);
        std::cout << "resizing Columns\n"; 
        for(int i = 0; i < Column; ++i)
        {
            std::cout << "resizing " << 
            alien[i].resize(Row);
        }
        int start_x = W/2 - (alien[0][0].w * Column) + (Offset * (Row - 1));

        for(int i = 0; i < Column; ++i)
        {
            for(int j = 0; i < Row; ++j)
            {
                alien[i][j].x =  start_x + (Offset * i) + (alien[0][0].w * i);
            }
        }
    }
    
    void move();

    static int Offset;
    int Row, Column;
    std::vector< std::vector < Alien > > alien;
};

std::ostream & operator << (std::ostream & cout, const Army & army)
{
    for(int i = 0; i < Column; ++i)
    {
        cout << '[';
        for(int j = 0; j < Row; ++j)
        {
            cout << 
        }
    }
}

#endif

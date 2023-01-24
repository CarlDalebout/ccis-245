/***************************************
Carl Dalebout

***************************************/
#ifndef ARMY_H
#define ARMY_H

#include <iostream>
#include <vector>
<<<<<<< HEAD
#include <string>
=======
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
#include "Alien.h"
#include "Lazer.h"

class Army: public Alien
{
public:
    Army(int r, int c)
        :Row(r), Column(c)
    {
        alien.resize(Column);
        std::cout << "resizing Columns\n"; 
        for(int i = 0; i < Column; ++i)
<<<<<<< HEAD
            army[i].resize(Row);
        
=======
        {
            std::cout << "resizing " << 
            alien[i].resize(Row);
        }
        int start_x = W/2 - (alien[0][0].w * Column) + (Offset * (Row - 1));

>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c
        for(int i = 0; i < Column; ++i)
        {
            for(int j = 0; j < Row; ++j)
            {
<<<<<<< HEAD
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
=======
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
>>>>>>> f6a079a4e4b778c6168004c9c1084a9a997aac7c

#endif

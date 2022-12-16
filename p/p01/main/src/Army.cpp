#include <Army.h>

int Army::Fired_Lazer(0);

void Army::move()
{
    if(army[0][0]. x < 0)
    {
        dx = speed;
        for(int i = 0; i < Column; ++i)
        {
            for(int j = 0; j < Row; ++j)
            {
                army[i][j].x = army[0][0].w * i + army[0][0].w/2;
            }
        }
    }
    else if(army[Column-1][0].right() > W)
    {
        dx = speed * -1;
        for(int i = 0; i < Column; ++i)
        {
            for(int j = 0; j < Row; ++j)
            {
                army[i][j].x = W - (army[0][0].w * (Column - i) + army[0][0].w/2);
            }
        }
    }
    else
    {
        for(int i = 0; i < Column; ++i)
        {
            for(int j = 0; j < Row; ++j)
            {
                //std::cout << "moving " << i << " " << j << '\n';
                army[i][j].x += dx;
            }
        }
    }
}

void Army::fire()
{
    int column = rand() & (Column-1);
    int row = rand() & (Row-1);
        
    if(rand() % 50  == 0)
    {
        //std::cout << "alien " << column << ' ' << row << " fired\n"; 
        Ammo.push_back(lazer);
        Ammo[Fired_Lazer].x = army[column][row].x + army[0][0].w/2 - Ammo[Fired_Lazer].w/2;
        Ammo[Fired_Lazer].y = army[column][row].y + army[0][0].h;
        Fired_Lazer++;
    }
}

void Army::move_lazers()
{
    for(int i = 0; i < Ammo.size(); ++i)
    {
        Ammo[i].y += 5;
        if(Ammo[i].y > H + Ammo[i].h)
        {
            Ammo.erase(Ammo.begin());
                Army::Fired_Lazer--;
        }
    }
}

std::ostream & operator<<(std::ostream & cout, const Army & army)
{
    std::string dr = "";
    for(int i = 0; i < army.Column; ++i)
    {
        cout << '[';
        dr = "";
        for(int j = 0; j < army.Row; ++j)
            {
                cout << dr << '|' << army.army[i][j].x << ", " << army.army[i][j].y << '|'; dr = ", ";
            }
        cout << "]\n";
    }
    return cout;
}

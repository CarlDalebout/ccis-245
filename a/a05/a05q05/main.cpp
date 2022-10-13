#include <iostream>
#include <cstdlib>
#include "Robot.h"

void test_print()
{
    char name;
    int x,y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    print(r);
    return;
}

void test_move_north()
{
    char name;
    int x,y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_north(r);
    print(r);
    return;
}

void test_move_south()
{
    char name;
    int x,y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_south(r);
    print(r);
    return;
}

void test_move_east()
{
    char name;
    int x,y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_east(r);
    print(r);
    return;
}

void test_move_west()
{
    char name;
    int x,y;
    int energylevel;
    std::cin >> name >> x >> y >> energylevel;
    Robot r;
    init(r, name, x, y, energylevel);
    move_west(r);
    print(r);
    return;
}

int main()
{
    int seed;
    std::cin >> seed;
    srand(seed);

    int option = 0;
    std::cin >> option;

    switch (option)
    {
        case 1:
            test_print();
            break;
        case 2:
            test_move_north();
            break;
        case 3:
            test_move_south();
            break;
        case 4:
            test_move_east();
            break;
        case 5:
            test_move_west();
            break;
    }
    
    return 0;
}

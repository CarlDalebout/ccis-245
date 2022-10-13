/***************************************************************************

File  : Robot.cpp
Author: smaug

Implementation of functions prototypes in Robot.h.




***************************************************************************/
#include <iostream>
#include "Robot.h"

void init(Robot & r, char name, int x, int y, int energylevel)
{
    r.name = name;
    r.x = x;
    r.y = y;
    r.energylevel = energylevel;
}

void move_north(Robot & robot)
{
    if(robot.energylevel != 0)
    {
        robot.y--;
        robot.energylevel--;
    }
}

void move_south(Robot & robot)
{
    if(robot.energylevel != 0)
    {
        robot.y++;
        robot.energylevel--;
    }
}

void move_east(Robot & robot)
{
    if(robot.energylevel != 0)
    {
        robot.x++;
        robot.energylevel--;
    }
}

void move_west(Robot & robot)
{
    if(robot.energylevel != 0)
    {
        robot.x--;
        robot.energylevel--;
    }
}

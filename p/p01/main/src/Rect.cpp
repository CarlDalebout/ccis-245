/*****************************************************************************
Carl Dalebout
 Copyright
 *****************************************************************************/
#include "Rect.h"

bool Rect::collision(Rect & rect) const
{
    //top collision
    if   (top()       < rect.top()
          && bottom() > rect.top()
          && left()   < rect.right()
          && right()  > rect.left())
    {
        std::cout << "Top Collision \n";
        return true;
    }
    //lazer collides with the bottom of an object
    else if(top()       < rect.bottom()
            && bottom() > rect.top()
            && left()   < rect.right()
            && right()  > rect.left())
    {
        std::cout << "Bottom Collision \n";
        return true;
    }
    //lazer collides with left of an object
    else if(right()     > rect.left()
            && left()   < rect.right()
            && top()    < rect.bottom()
            && bottom() > rect.top())
    {
        std::cout << "Left Collision \n";
        return true;
    }
    //lazer collided with right of an object
    else if(left()      > rect.right()
            && right()  < rect.left()
            && top()    < rect.bottom()
            && bottom() > rect.top())
    {
        std::cout << "Right Collision \n";
        return true;
    }
    else
        return false;
}

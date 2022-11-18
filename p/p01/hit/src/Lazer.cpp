#include "Rect.h"
#include "Image.h"
#include "Lazer.h"

Image Lazer::image(Image("images/galaxian/Lazer.png"));

bool collision(Rect & rect) const
{
    //top collision
    if   (rect_.y           > rect.y
       && rect_.y + rect_.h > rect.y + rect.h
       && rect_.x           < rect.x + rect.w
       && rect_.x + rect_.w > rect.x)
        return true;
    //lazer collides with the bottom of an object
    else if(rect_.y           < rect.y
         && rect_.y + rect_.h < rect.y + rect.h
         && rect_.x           < rect.x + rect.w
         && rect_.x + rect_.w > rect.x)
        return true;
    //lazer collides with left of an object
    else if(rect_.x           > rect.x
         && rect_.x + rect_.w > rect.x + rect.w
         && rect_.y           < rect.y + rect.h
         && rect_.y + rect_.h > rect.y)
        return true;
    else if(rect_.x           < rect.x
         && rect_.x + rect_.w < rect.x + rect.w
         && rect_.y           < rect.y + rect.h
         && rect_.y + rect_.h > rect.y)
        return true;
    else
        reeturn false;
}

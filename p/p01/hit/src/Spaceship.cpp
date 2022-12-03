#include "Includes.h"
#include "Constants.h"
#include "compgeom.h"
#include "Event.h"
#include "Rect.h"
#include "Image.h"
#include "Spaceship.h"

Image Spaceship::image(Image("images/galaxian/GalaxianGalaxip.gif"));

int Spaceship::Fired_Lazer(0);

const int Spaceship::MAX_LAZER(15);

void Spaceship::move(KeyPressed & keypressed)
{
    if (keypressed[LEFTARROW])
    {
        if (rect.x < 0)
            rect.x = 0;
        else
            rect.x -= speed_;
    }
    if (keypressed[RIGHTARROW])
    {
        if (rect.x > W - rect.w)
            rect.x = W - rect.w;
        else
            rect.x += speed_;
    }

    if(keypressed[SPACE] && fired == 0)
    {
        fired = 1;
        if(Fired_Lazer < MAX_LAZER)
        {
            Ammo.push_back(lazer_);
            Ammo[Fired_Lazer].rect.x = rect.x + rect.w / 2 - Ammo[Fired_Lazer].rect.w /2;
            Ammo[Fired_Lazer].rect.y = rect.y - Ammo[Fired_Lazer].rect.h;
            Fired_Lazer++;
        }
    }

    if(!keypressed[SPACE] && fired == 1)
    {
        fired = 0;
    }
}

void Spaceship::move_lazers()
{
    for(int i = 0; i < Ammo.size(); ++i)
    {
        Ammo[i].rect.y -= 5;
        if(Ammo[i].rect.y < -Ammo[i].rect.h)
        {
            Ammo.erase(Ammo.begin());
                Spaceship::Fired_Lazer--;
        }
    }
}




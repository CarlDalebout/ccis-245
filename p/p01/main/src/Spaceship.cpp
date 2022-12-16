#include "Includes.h"
#include "Constants.h"
#include "compgeom.h"
#include "Event.h"
#include "Rect.h"
#include "Image.h"
#include "Spaceship.h"

Image Spaceship::image(Image("images/galaxian/GalaxianGalaxip.gif"));

int Spaceship::Fired_Lazer(0);

const int Spaceship::MAX_LAZER(3);

void Spaceship::move(KeyPressed & keypressed)
{
    if (keypressed[LEFTARROW])
    {
        if (x < 0)
            x = 0;
        else
            x -= speed;
    }
    if (keypressed[RIGHTARROW])
    {
        if (x > W - w)
            x = W - w;
        else
            x += speed;
    }

    if(keypressed[SPACE] && fired == 0)
    {
        fired = 1;
        if(Fired_Lazer < MAX_LAZER)
        {
            Ammo.push_back(lazer);
            Ammo[Fired_Lazer].x = x + w / 2 - Ammo[Fired_Lazer].w /2;
            Ammo[Fired_Lazer].y = y - Ammo[Fired_Lazer].h;
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
        Ammo[i].y -= 5;
        if(Ammo[i].y < -Ammo[i].h)
        {
            Ammo.erase(Ammo.begin());
                Spaceship::Fired_Lazer--;
        }
    }
}

void Spaceship::erase (int i)
{
    Ammo.erase(Ammo.begin() + i);
    Fired_Lazer--;
}


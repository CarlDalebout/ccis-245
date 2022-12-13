/*****************************************************************************
 Yihsiang Liow
 Copyright
 *****************************************************************************/
#ifndef RECT_H
#define RECT_H

#include <iostream>
#include "SDL_gfxPrimitives.h"

class Rect
{
public:
    Rect(int x0 = 0, int y0 = 0,
         int w0 = 0, int h0 = 0 ,
         int s = 5,
         int dx0 = 0, int dy0 = 0)
		: x(x0), y(y0),
                  w(w0), h(h0),
                  dx(dx0), dy(dy0)
    {}
    Rect( const SDL_Rect & r, int & s)
		: x(r.x), y(r.y),
                  w(r.w), h(r.h),
                  speed(s), dx(s), dy(s)
    {}
    Rect( const SDL_Rect & r)
        : x(r.x), y(r.y),
          w(r.w), h(r.h),
          speed(2), dx(2), dy(2)
    {}
    SDL_Rect getSDL_Rect()
    {
        SDL_Rect r = {Sint16(x), Sint16(y),
                      Uint16(w), Uint16(h)};
        return r;
    }

    int    top() const {return y;}
    int bottom() const {return y + h;}
    int   left() const {return x;}
    int  right() const {return x + w;}

    Rect rect()  const {return *this;}

    bool collision(Rect &) const;
    
    int x, y, w, h;
    int speed, dx, dy;
};

inline std::ostream & operator<<(std::ostream & cout, const Rect & r)
{
    cout << "("
         << r.x << "," << r.y << ","
         << r.w << "," << r.h
         << ")";
    return cout;
}
#endif

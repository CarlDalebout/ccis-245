#include <iostream>
#include <cmath>
#include "vec2d.h"



bool vec2d::operator==(const vec2d & v) const
{
    return (dx_ == v.dx_ && dy_ == v.dy_);
}
bool vec2d::operator!=(const vec2d & v) const
{
    return !operator==(v);
}


double vec2d::x() const
{
    return dx_;
}
double & vec2d::x()
{
    return dx_;
}

double vec2d::y() const
{
    return dy_;
}
double & vec2d::y()
{
    return dy_;
}


double vec2d::operator[](int v) const
{
    if(v == 0)
        return dx_;
    else if( v == 1)
        return dy_;
    else
    {
        std::cout << "The number that was input is out of scope return -1.0\n";
        exit(0);
    }
}
double & vec2d::operator[](int v)
{
    if(v == 0)
        return dx_;
    else if( v == 1)
        return dy_;
    else
    {
        std::cout << "The number that was input is out of scope return -1.0\n";
        exit(0);
    }
}


vec2d vec2d::operator+() const
{
    vec2d ret(dx_, dy_);
    return ret;
}

vec2d vec2d::operator-() const
{
    vec2d ret(dx_ * -1, dy_ * -1);
    return ret;    
}

vec2d vec2d::operator+(const vec2d & v) const
{
    vec2d ret(dx_ + v.dx_, dy_ + v.dy_);
    return ret;
}
vec2d vec2d::operator-(const vec2d & v) const
{
    return operator+(-v);
}
vec2d vec2d::operator*(double v) const
{
    vec2d ret(dx_ * v, dy_ * v);
    return ret;
}
vec2d vec2d::operator/(double v) const
{
    vec2d ret(dx_ / v, dy_ / v);
    return ret;
}


vec2d & vec2d::operator+=(const vec2d & v)
{
    *this = *this + v; 
    return *this;
}
vec2d & vec2d::operator-=(const vec2d & v)
{
    *this = *this - v;
    return *this;
}
vec2d & vec2d::operator*=(double v)
{
    *this = *this * v;
    return *this;
}
vec2d & vec2d::operator/=(double v) 
{
    *this = *this / v;
    return *this;
}

vec2d operator*(double v, const vec2d & u)
{
    vec2d ret(u.x() * v, u.y() * v);
    return ret;
}

double len(const vec2d & v)
{
    double ret = sqrt(v.x() * v.x() + v.y() * v.y());
    return ret;
}

double dotpro(const vec2d & u, const vec2d & v)
{
    double ret = (u.x() * v.x()) + (u.y() * v.y());
    return ret;
}

vec2d norm(const vec2d & v)
{
    double Len = len(v);
    vec2d ret(v.x()/Len, v.y()/Len);
    return ret;
}

std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '{'  <<v.x() << ", " << v.y() << '}';
    return cout;
}

std::istream & operator>>(std::istream & cin, vec2d & v)
{
    double x,y;
    cin >> v.x() >> v.y();


    return cin;
}

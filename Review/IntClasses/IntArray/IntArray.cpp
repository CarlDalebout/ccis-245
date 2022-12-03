#include <iostream>
#include <string>
#include "IntArray.h"

int operator[](int v) const
{
    if(v >= size)
    {
        std::cout << "Value is outside of scope \n";
        exit(0)
    }
    else 
        return x_[v];
}

int & operator[](int v)
{
        if(v >= size)
    {
        std::cout << "Value is outside of scope \n";
        exit(0)
    }
    else 
        return x_[v];
}

void IntArray::push_back(const int v)
{
    if(size_ < cap_)
    {
        x_[size_] = v;
        size_++;
    }
    else
        std::cout << "there is to much in this array\n";
}

void IntArray::push_front(const int v)
{
    if(size_ < cap_)
    {
        for(int i = size_; i > 0; i--)
        {
            x_[i] = x_[i-1];
        }
        x_[0] = v;

        size_++;
    }
    else
        std::cout << "there is to much in this array\n";
}

std::ostream & operator<<(std::ostream & cout, const IntArray & a)
{
    cout << '{';
    std::string delim = "";
    for(int i = 0; i < a.size_; i++)
    {
        cout << delim << a.x_[i]; delim = ", ";
    }
    cout << '}';
    return cout;
}

std::istream & operator>>(std::istream & cin, IntArray & a)
{
    
    return cin;
}

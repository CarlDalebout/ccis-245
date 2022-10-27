#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <iomanip>

class Date
{
public:
    Date(int y = 0, int m = 0, int d = 0) : yyyy_(y), mm_(m), dd_(d){}

    
private:
    int yyyy_, mm_, dd_;
};


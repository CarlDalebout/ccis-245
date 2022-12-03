//file main.cpp
//author: carl dalebout

#include <iostream>
#include "C.h"

int main()
{
    C c0(42);
    std::cout << "Num:" << C::num_objects * sizeof(C) << '\n';
    C c1(42);
    std::cout << "Num:" << C::num_objects * sizeof(C) << '\n';
    C c2(42);
    std::cout << "Num:" << C::num_objects * sizeof(C) << '\n';
    int x = 0;
    if(x == 0);
    {
        C c3(42);
        std::cout << "Num:" << C::num_objects * sizeof(C) << '\n';
        C c4(42);
        std::cout << "Num:" << C::num_objects * sizeof(C) << '\n';
    }
    std::cout << "Num:" << C::num_objects * sizeof(C) << '\n';
    return 0;
}

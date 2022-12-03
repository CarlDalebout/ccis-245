//File main.cpp
//Author Carl

#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray a(5); //a models an array of cap 5, size 0
    a.resize(3);
    std::cout << "a: " << a << '\n';
    std::cout << "a[0]: " << a[0] << '\n';
    a[0] = 42;
    std::cout << "a[0]: " << a[0] << '\n';
    std::cout << "a: " << a << '\n';
    a[2] = 99;
    std::cout << "a[2]: " << a[2] << '\n';
    
    IntDynArray b(a);
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';

    IntDynArray c;
    c = b;
    std::cout << "c: " << c << '\n';
  
    return 0;
}

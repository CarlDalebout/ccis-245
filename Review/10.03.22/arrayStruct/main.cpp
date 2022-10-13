#include <iostream>
#include "Array.h"

int main()
{
    Array a; // Have a.x int array x of size 5, size.
    Array_init(a); // set a.size to 0
    std::cout << a << '\n'; // print {}
    Array_pushback(a, 2);
    std::cout << a << '\n';
    Array_pushback(a, 43);
    std::cout << a << '\n';
    Array_pushback(a, 3);
    std::cout << a << '\n';
    Array_pushback(a, 99);
    std::cout << a << '\n';
    Array_pushback(a, 47);
    std::cout << a << '\n';
    Array_pushback(a, 100000);
    std::cout << a << '\n';
    Array_popback(a);
    std::cout << a << '\n';
}

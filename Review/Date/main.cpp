#include <iostream>
#include "Date.h"

int main ()
{
    Date d;
    Date e(d);
    Date f(2022, 10, 24);

    d.year() = 800; 
    
    std::cout << "d: " << d << '\n';
    std::cout << "e: " << e << '\n';
    std::cout << "f: " << f << '\n';
    return 0;
}

#include <iostream>
#include "fraction.h"

int main()
{
    Fraction f0;

    Fraction_set(f0, 1, 2);
    std::cout << "f0 = ";
    Fraction_println(f0);

    Fraction f1;
    Fraction_set(f1, 1, 3);
    Fraction_println(f1);
    
    // f0 = f1
    //Fraction_addeq(f0 , f1);
    f0 += f1; // ------> operator+=(f0, f1)
    std::cout << "f0 = ";
    Fraction_println(f0);

    f0 = f0 + f1;
    std::cout << "f0 = ";
    Fraction_println(f0);

    Fraction_set(&f0, 1, 2);
    Fraction_println(f0);

    std::cout << (f0 == f1) << '\n';

    std::cout << f0 << '\n';

    /*****************************
       std::cout << f0 << '\n';
       operator<<( std::cout, f0) << '\n';
       operator<<( operator<<(std::cout, f0), '\n')
                   --------------------------
                         std::cout

    ******************************/

    Fraction f[10];

    for (int i = 0; i < 10; ++i)
    {
        Fraction_set(f[i], i , 10);
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << f[i] << '\n';
    }
    
    
    return 0;
}

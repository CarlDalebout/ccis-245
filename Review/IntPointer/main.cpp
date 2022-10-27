#include <iostream>
#include "IntPointer.h"

int main()
{
    IntPointer p1( 2 ); // object p contains a pointer, constructer auto allocate
    IntPointer p2(p1);  // an integer value for object p point to.
                        // The pointer inside p is called p_.
    std::cout << "p1 " << *p1 << '\n';
    *p1 = 55;
    std::cout << "p1 " << *p1 << '\n';
    std::cout << "p2 " << *p2 << '\n';
    *p1 = *p2;
    std::cout << "p2 " << *p2 << '\n';
    
    // q.set int(42);
    // std::cou << p.get_int() << '\n';
    // no need to deallocate p.p_ ...... do that in the destructor
    
}

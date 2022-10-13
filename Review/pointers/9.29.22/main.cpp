#include <iostream>
#include <cmath>

bool isprime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i = 2; i<= sqrt(n); ++i)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}


void nextprime(int &x)
{
    while(1)
    {
        ++x;
        if(isprime(x)) return;
    }
}


void nextprime(int *x)
{
    while(1)
    {
        ++(*x);
        if(isprime(*x)) return;
    }
    
}


int main()
{
    // int x = 42;
    // int *p = &x; // p = 5000 or address of x "&x"
    // *p = 0; // SW 0, 5000
    // x = 1 + *p + 2; // LW $t0 ,5000
    int x = 0;
    nextprime(&x);
    // x is now 2
    std::cout << x << std::endl;
    nextprime(x);
    // x is now 3
    std::cout << x << std::endl;
    nextprime(&x);
    std::cout << x << std::endl;
    nextprime(&x);
    std::cout << x << std::endl;nextprime(&x);
    std::cout << x << std::endl;
    return 0;
}

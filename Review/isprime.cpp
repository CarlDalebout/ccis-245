#include<iostream>
#include<cmath>

bool isprime(int n);

int main()
{
    for(int i =1000000000; i<2000000000; ++i)
    {
        std::cout<< i << ' ' <<isprime(i)<<'\n';
    }
    return 0;
}

bool isprime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int d = 2; d<= sqrt(n); ++d)
    {
        if(n%d ==0)
        {
            return false;
        }
    }
    return true;
}




#include <iostream>
#include <cassert>

int q(int x, int y)
{
    assert(y != 0);
    return x / y; 
}

int main()
{
    std::cout << q(1, 1) << std::endl;
    std::cout << q(1, 0) << std::endl;
}

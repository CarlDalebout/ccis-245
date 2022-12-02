#include <iostream>
#include <cmath>

class ZeroDivError
{

};

class SquareRootError
{
public:
    SquareRootError(int x)
        :x_(x)
    {}
    int x_;
};
std::ostream & operator<<(std::ostream & cout, const SquareRootError & e)
{
    cout << "ERROR: sqrt(" << e.x_ << ") was attempted\n";
    return cout;
}

int f(int x, int y)
{
    if(x == y) throw ZeroDivError();
    if(x < 0) throw SquareRootError(x);
    
    return (x+1) / (x - y) * sqrt(x);
}

int g()
{
    try
    {
        std::cout << f(2, 1) << std::endl;
        //std::cout << f(2, 2) << std::endl;
        std::cout << f(-2, 2) <<std::endl;
    }
     catch(ZeroDivError & e)
    {
        std::cout << "I caught a 0 div error...etc\n";
        
    }
    catch(SquareRootError & e)
    {
        std::cout << "g caught square root of negative number error...etc\n";
        std::cout << e << '\n';
        throw e;
    }
    

    return 0;
}

int main()
{
    try
    {
        g();
    }
    catch(ZeroDivError & e)
    {
        std::cout << "I caught a 0 div error...etc\n";
    }
    catch(SquareRootError & e)
    {
        std::cout << "main caught square root of negative number error...etc\n";
        std::cout << e << '\n';
    }
        
    return 0;
}

#include <iostream>

//SquareFunction.h

class SquareFunction
{
public:
    SquareFunction()
        :previous_x(0), previous_y(0)
    {}
    int operator()(int);

private:
    int previous_x;
    int previous_y; //result
};

class Fib
{
public:
    Fib()
        : t(new int[20])
    {
        t[0] = t[1] = 1;
    }
    ~Fib()
    {
        delete[] t;
    }
    int operator()(const int n)
    {
        if(table [n] == 0)
        {
            table[n] = operator()(n - 1) + operator()(n - 2); // switch to a + b = c; a = b; b = c;
        }
        return table[n];
        
    }
private:
    int *t;
}


//SquareFunction.cpp

int SquareFunction::operator()(int x)
{
    if(previous_x == x)
    {
        std::cout << "no recomputation!\n";
        return previous_y;
    }
    else
    {
        std::cout << "too bad compute\n";
        previous_x = x;
        previous_y = x * x;
        return previous_y;
    }
}

int simplesquare(int x)
{
    return x * x;
}


//main.cpp
int fib(int n)
{
    if(n <=1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int fib2(const int n)
{
    int t[n+1] = {1 , 1};
    //int * t = new int[n +1];
    for(int i = 2; i <= n; ++i)
    {
        t[i] = t[i-1] + t[i-2];
    }
    return t[n];
}

int main()
{
    for(int i = 0; i <= 50; i++)
    {
        std::cout << "fib2(" << i << ") =" <<  fib2(i) << '\n';
    }
    return 0;
}

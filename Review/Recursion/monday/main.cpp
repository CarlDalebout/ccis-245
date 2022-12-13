#include <iostream>

int sum(int n)
{
    if(n == 0)
        return 0;
    return sum(n-1)+n;
}

int factorial(int n)
{
    if(n == 0)
        return 1;
    return factorial(n-1) * n;
}

int twopower(int n)
{
    if(n == 0)
        return 1;
    return twopower(n-1)*2;
}

double f(int n)
{
    if(n == 1)
        return 1;
    return f(n-1) + 1.0/n;
}

int gcd(int a, int b)
{
    if(b == 0)
        reutrn a;
    return gcd(b, b%a);
}

//n chose are (n -> r) = ([n-1] -> r) + ([n-1] -> [r-1])

int main()
{
    int n;

    std::cin >> n;
    std::cout << sum(n) << '\n'
              << factorial(n) << '\n'
              << twopower(n) << '\n'
              << f(n) << '\n';
    return 0;
}

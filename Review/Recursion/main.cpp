#include <iostream>

int sum_iter(int n) 
{
    int s = 0;
    for(int i = 0; i <= n; ++i)
    {
        s += i;
    }
    return s;
}

int sum(int n) // sum = 1 + 2 + 3 + 4 ... + n
{
    if(n == 0)
    {
        std::cout << "sum ... n = 0 ... base \n";
        return 0;
    }
    else
    {
        // std::cout << "sum ... n = " << n << " ... recursive case\n";
        int ret = sum(n-1);
        std::cout << "sum ... n = " << n << " received " << ret << '\n';
        return ret + n;
//return sum(i-1)+i; 
    }
}

int sum(int x[], int y) // x = [1, 3, 5, 9] y = 4  sum = 1 + 3 + 5 + 9
{
    if(y == 0)
    {
        std::cout << "Base case\n";
        return 0;
    }
    else
    {
        std::cout << "sum ... n = " << y << " ... recursive case\n";
        int ret = sum(x, y-1);
        std::cout << "sum ... n = " <<  x[y-1] << " ... received " << ret << '\n';
        return ret + x[y-1];
    }
}

double f(int n)// 1 + 1/2 + 1/3 + 1/4 + ... 1/n 
{
    if(n == 1)
    {
        std::cout << "Base case\n";
        return 1;
    }
    else
    {
        std::cout << "sum ... n = " << n << " ... recursive case\n";
        double ret = (f(n-1)+1/(double)n);
        std::cout << "sum ... n = " << n << " received " << ret << '\n';
        return ret;
    }
}

int factorial(int i) //factorial = 1 * 2 * 3 * 4 * ... * n
{
    if( i == 1 || i == 0 )
        return 1;
    else return factorial(i-1)*i; 
}

int main ()
{
    int i[] = {3, 4, 5, 6};
    //std::cin >> i;
    std::cout << sum(i, 4) << std::endl;
    return 0;
}

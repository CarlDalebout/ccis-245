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

int c(int n, int r)
{
    if(r == 0 || n == r)
        return 1;
    else
        return c(n-1, r-1) + c(n-1, r);
}

int min(int x[], int n)
{
    if(n == 0)
        return x[0];
    else
    {
        int m = min(x, n-1);
        return (x[n-1] <= m ? x[n-1] : m);
    }
}

int max(int x[], int n)
{
    if(n == 0)
        return x[0];
    else
    {
        int m = max(x, n-1);
        return (x[n-1] >= m ? x[n-1] : m);
    }
}

int count(int x[], int n, int target)
{
    
    if (n == 0)
        return 0;
    else
    {
        int c = count(x, n-1, target);
        return c + (x[n-1] == target ? 1 : 0);
    }
}

void h(int n, char from, char helper, char to)
{
    if(n==1)
        std::cout << from << "->" << to << '\n';
    else
    {
        h(n-1, from, to, helper);
        h(1, from, helper, to);
        h(n-1, helper, from, to);
    }
}

int main ()
{
    int i[] = {3, 4, 5, 6};
    //std::cin >> i;
    h(6, 'A', 'B', 'C');
    return 0;
}

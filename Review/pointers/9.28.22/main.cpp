#include <iostream>

void f(int x,int y)
{
    int t = x;
    x = y;
    y = t;
}
void g(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
void h(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int i = 42, y = 0;
    f(i, y);  std::cout << i << ' ' << y << '\n';
    g(i, y);  std::cout << i << ' ' << y << '\n';
    h(&i, &y); std::cout << i << ' ' << y << '\n';
    return 0;    
}

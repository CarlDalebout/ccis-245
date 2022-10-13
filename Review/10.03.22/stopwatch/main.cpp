#include <iostream>

struct Time
{
    int hour;
    int min;
    int sec;
};

struct Stopwatch
{
    int id;
    Time t;
};

std::ostream & operator<<(std::ostream & cout, Stopwatch & sp)
{
    cout << '{' << sp.id << ", {" << sp.t.hour << ", " << sp.t.min << ", " << sp.t.sec << "}}";
    return cout;
}

int main()
{
    Stopwatch sp = {0, {8, 0, 0}};
    sp.t.hour = 0;

    std::cout << sp << '\n';
    
    return 0;
}

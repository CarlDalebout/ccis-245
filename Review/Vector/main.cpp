#include <iostream>
#include <vector>

std::ostream & operator<<(std::ostream & cout,
                          const std::vector< int > & v)
{
    std::string sep = "";
    cout<< '{';
    for(int i = 0; i < v.size() - 1; ++i)
    {
        cout << sep << v[i];
        if(i == 0) sep = ", ";        
    }
    cout << '}';
    return cout;
}

int main ()
{
    int s = 3;
    std::vector< int > v(s);

    v[0] = 1; v[1] = 10; v[2] = 100;

    std::cout << "v: " << v << "\n";
    v[0] = 42;
    std::cout << "v: " << v << "\n";

    std::vector< int > u(v);
    std::cout << "u: " << u << "\n";

    if (u == v)
    {
        std::cout << "same\n";
    }

    v.resize(10);
    std::cout << "v: " << v << "\n";

    std::vector< int > w(4);
    std::cout << "w: " << w << "\n";

    w = u;
    std::cout << "w: " << w << "\n";
}

#include <iostream>

class Int
{
public:
    explicit Int(int i) // a constructor is also a type casting operator
        :i_(i)
    {}
    explicit operator int() // explicit prevents automatic type casting
    {
        return i_;
    }
//private:
    int i_;
};

std::ostream & operator<<(std::ostream & cout, const Int & I)
{
    cout << "<Int " << I.i_ << '>';
    return cout;
}

void f(Int I)
{
    std::cout << "in f ... I:" << I << '\n';
}

class C
{
public:
    C(int j)
        :i_(j)
    {}
    C()
        :i_(42)
    {}
    int i_;    
};

int main()
{
    // Int I(0);
    // std::cout << I << '\n';
    // int i = int(I);
    // std::cout << i << '\n';
    // f(i);
    //f();

    C c[1000];
    std::cout << c[0].i_ << '\n';

    C * p[100];
    for(int i = 0; i < 100; i++)
    {
        p[i] = new C(i);
    }

    // do usefull work with p[i] ...
    
    for(int i = 0; i < 100; i++)
    {
        delete p[i];
    }
    
    return 0;
}

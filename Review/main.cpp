#include <iostream>

class Int
{
public:
    Int(int i = 0)
        :i_(i)
    {}
    operator int()
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

int main()
{
    Int I(3);
    std::cout << I << '\n';
    //int i = int(I);
    int i = I;
    std::cout << i << '\n';
    return 0;
}

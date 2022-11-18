//File: main.cpp
//Author: Carl Dalebout

class C
{
public:
    C(int x)
        : x_(x)
    {}
    
    friend void f(C c);
        
private:

    int x_;
};

void f(C c)
{
    std::cout << c.x_ << '\n';
}

int main()
{
    C c(23);
    f(c);
    return 0;
}

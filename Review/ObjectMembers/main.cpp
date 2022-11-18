//File main.cpp
//Author carl Dalebout

#include <iostream>


class Apple
{
public:
    Apple(int x = 0, int y = 0)
        :x_(x), y_(y)
    {}
    void spawn();

    void set(int x, int y)
    {
        x_ = x; y_ = y;
    }
    int x() const { return x_; }
    int y() const { return y_; }
    
private:
    int x_, y_;
};

class Surface
{
public:
    Surface()
    {
        for(int i = 0; i < 10; ++i)
            for(int j = 0; j < 10; ++j)
                surface_[i][j] = ' ';
    }

    void put(const Apple & a)
    {
        surface_[a.x()][a.y()] = 'A';
    }
    
    void clear()
    {
        for(int i = 0; i < 10; ++i)
            for(int j = 0; j < 10; ++j)
                surface_[i][j] = ' ';
    }
    
    void draw()
    {
        for(int i = 0; i < 12; ++i)
            std::cout << '-';
        std::cout << '\n';
        for(int i = 0; i < 10; ++i)
        {
            std::cout << '|';
            for(int j = 0; j < 10; ++j)
                std::cout << surface_[i][j];
            std::cout << "|\n";
        }
        for(int i = 0; i < 12; ++i)
            std::cout << '-';
        std::cout << '\n';
    }

private:
    char surface_[10][10];
    //int H, W; 10x10;
};
int main()
{
    Surface surface;
    Apple a;
    a.set(2, 3);
    surface.put(a);
    surface.draw();
    return 0;
}

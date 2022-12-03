#include <iostream>

class GameObject // any visible eneity of the game
{
public:
    GameObject(int x, int y,
               int r, int g, int b,
               int dx, int dy)
        :x_(x), y_(y),
         r_(r), g_(g), b_(b),
         dx_(dx), dy_(dy)
    {}
    GameObject(int x)
        :x_(x)
    {
        std::cout << "GameObject::GameObject() ... x: " << x << '\n';
    }
    int  x()const { return x_; }
    int &x()      { return x_; }
    
    int  y()const { return y_; }
    int &y()      { return y_; }
    
    

    
private:
    int x_, y_;
    int r_, g_, b_;
    int dx_, dy_;
};

class Star: public GameObject 
{
public:
    Star(int x, int y, int radius,
         int r, int g, int b,
         int dx, int dy)
        :GameObject(x, y, r, g, b, dx, dy),
         radius_(radius)
    {}
    
    void print()const
    {
        std::cout << "star at " << x() << '\n';
    }
private:
    int radius_;
};

class Lazer
{
public:
    Lazer(int x, int y, int w, int h,
         int r, int g, int b,
         int dx, int dy)
        :x_(x), y_(y), w_(w), h_(h),
         r_(r), g_(g), b_(b),
         dx_(dx), dy_(dy)
    {}
    
    int  x()const { return x_; }
    int &x()      { return x_; }

    int  y()const { return y_; }
    int &y()      { return y_; }
    
    int  r()const { return r_; }
    int &r()      { return r_; }

    void print()const
    {
        std::cout << "lazer at " << x_ << '\n';
    }
private:
    int x_, y_, w_, h_;
    int r_, g_, b_;
    int dx_, dy_;
};
    
int main()
{
    Star star(0, 0, 5, 255, 255, 255, 0, 1);
    Lazer lazer(100, 200, 5, 8, 255, 255, 255, 0, 1);
    
    star.print();
    lazer.print();

    return 0;
}

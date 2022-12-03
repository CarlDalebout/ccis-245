//File main.cpp
//Author Carl Dalebout

#include <iostream>

class Engine
{
public:
    Engin(int id)
        :id_(id)
    {}
    void start()
    {
        std::cout << "Start engine ...\n";
    }
    
private:
    int id_;
};

class Car
{
public:
    Car(int id = 0)
        :id_(id)
    {}
    Engine & getEngine()
    {
        return anEngine_;
    }
    void start()
    {
        anEngine_.start();
    }
private:
    int id_;
    Engine anEngine_;
};

int main()
{
    Car aCar(42);

    aCar.start();
    
    return 0;
}

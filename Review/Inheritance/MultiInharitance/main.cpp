#include <iostream>
#include <cstdlib>
#include <ctime>

class Animal
{
public:
    Animal(int num_legs = 4)
        :num_legs_(num_legs)
    {}

    virtual void talk() = 0; // Acts as a contract stating that if someone tries to be a child of me without this function then end the code
    
    int num_legs_;
};

class Dog: public Animal
{
public:
    Dog()
        :Animal(4)
    {}

    void talk()
    {
        std::cout << "bowwow\n";;
    }

};

class Cat: public Animal
{
public:
    Cat()
        :Animal(4)
    {}

    void talk()
    {
        if(rand() % 2 == 0)
        {
            std::cout << "Meow\n";
        }
    }
};

class Numeric
{
public:
    Numeric()
    {}

    virtual void print() = 0;
};

class Int
{
public:
    Int()
    {}

    void print();
};

class Double
{
public:
    Double()
    {}

    void print();
};
int main()
{
    srand((unsigned int) time(NULL));
    // Dog dog;
    // Cat cat;
    // dog.talk();
    // cat.talk();

    Dog dog;
    dog.talk();
    Animal * panimal;
    std::cout << "0 - dog, 1 - cat?";
    int option;
    std::cin >> option;
    if(option == 0)
        panimal = new Dog;
    else
        panimal = new Cat;

    for(int i = 0; i < 10; ++i)
    {
        panimal -> talk();
    }

    return 0;
}

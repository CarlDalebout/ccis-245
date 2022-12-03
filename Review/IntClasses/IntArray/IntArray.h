#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
public:
    IntArray()
        : size_(0), cap_(10)
    {}

    int operator[](int) const;

    int & operator[](int);
    
    void push_back(const int);

    void push_front(const int);
    
    void inser(const int, const int);

    void pop_back();

    void pop_front();

    int find(const int);

    void remove(const int);

    

//private:
    int x_[10];
    int size_;
    int cap_;

};

std::ostream & operator<<(std::ostream &, const IntArray &);

std::istream & operator>>(std::istream &, IntArray &);

#endif

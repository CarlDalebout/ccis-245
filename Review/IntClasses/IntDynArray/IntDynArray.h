//=============================================================
//File: IntDynArray.h
//
//Author: Carl
//
//Description
//This library models a dynamic arry objects. A dynamic
//array is one that "expand" and "contrasts" auto-magicly
//by itself, i.e., the object has a pointer to an array
//in the heap.
//
//METHODS:
//f(int)   f(i) will...
//
//USage:
//IntDynArray a(5); // a models an array of capacity 5
//a.push front(42); // a = {42}
//==============================================================



#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

#include <iostream>
#include <string>

class IntDynArray
{
public:
    IntDynArray():p_(new int[0]), size_(0), capacity_(0){}
     IntDynArray(int);
     IntDynArray(IntDynArray &);
    ~IntDynArray();

    int   size() const;
    int & size();
    int & resize(int);

    int  operator[](int) const;
    int &operator[](int);
    int          at(int)const;
    
    
    IntDynArray & operator=(const IntDynArray &);

    IntDynArray & reallocate();

private:
    int * p_;
    int size_, capacity_;
};

std::ostream & operator<<(std::ostream &, const IntDynArray &);

#endif

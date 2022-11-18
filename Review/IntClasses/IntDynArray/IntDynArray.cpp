//File: Intdynamic.cpp
//Author: Carl Dalebout

#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int capacity)
    :p_(new int[capacity]), size_(0), capacity_(capacity)
{}

IntDynArray::IntDynArray(IntDynArray & a)
    :p_(new int[a.capacity_]), size_(a.size_), capacity_(a.capacity_)
{
    for(int i = 0; i < a.size_; i++)
    {
        p_[i] = a.p_[i];
    }
}
IntDynArray::~IntDynArray()
{
    delete[] p_;   
}


int  IntDynArray::size() const { return size_; }
int &IntDynArray::size()       { return size_; }
int &IntDynArray::resize(int N)
{
    if(N < capacity_)
    {
        size_ = N;
    }
    else
    {
        int * q = new int [N];
        for(int i = 0; i < N; ++i)
        {
            q[i] = p_[i];
        }
        delete [] p_;
        p_ = new int[N];
        size_ = N;
        capacity = N;
    }
    return size_;
}


int  IntDynArray::operator[](int i)const { return p_[i]; }
int &IntDynArray::operator[](int i)      { return p_[i]; }
int  IntDynArray::        at(int i)const
{
    if(0 < i && i < size_)
    {
        return p_[i];
    }
    throw 
}


IntDynArray & IntDynArray::operator=(const IntDynArray & a)
{
    if(this != &a)
    {
        if(a.size_ > capacity_)
        {
            int * q = new int[a.size_];
            for(int i = 0; i < a.size_; ++i)
            {
                q[i] = a.p_[i];
            }
            // I.e.. executing b = a where b "is" a
            delete[] p_;
            p_ = q
                size = 
            capacity_ = a.size_;
        }
        size_ = a.size_;
        for(int i = 0; i < a.size_; ++i)
        {
            p_[i] = a[i];
        }
    }
    return *this;
}

std::ostream & operator<<(std::ostream & cout, const IntDynArray & a)
{
    cout << '{';
    std::string delim = "";
    for(int i = 0; i < a.size(); ++i)
    {
        cout << delim << a[i]; delim = ", ";
    }
    cout << '}';
    return cout;
}

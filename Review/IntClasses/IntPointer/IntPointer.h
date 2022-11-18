#ifndef INTPOINTER_H
#define INTPOINTER_H

#include <iostream>

class IntPointer
{
  public:
    IntPointer(int v = 0)
        :p_(new int)
    {
        *p_ = v;
    }
    IntPointer(const IntPointer & q)
        :p_(new int) 
    {
        *p_ = *(q.p_);
    }x
    ~IntPointer()
    {
        std::cout << "deleting p_\n";
        delete p_;
        p_ = NULL;
    }

    IntPointer operator=(const IntPointer & q);
    int operator*() const;
    int & operator*();
    
  private:
    int *p_;
};



#endif

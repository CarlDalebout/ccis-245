#include <iostream>
#include "IntPointer.h"

IntPointer IntPointer::operator=(const IntPointer & q)
{
    return *(q.p_);
}

int IntPointer::operator*() const
{
    return *p_;
}

int & IntPointer::operator*()
{
    return *p_;
}

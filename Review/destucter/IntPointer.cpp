#include <iostream>
#include "IntPointer.h"

int IntPointer::operator*() const
{
    return *p_;
}

int & IntPointer::operator*()
{
    return *p_;
}

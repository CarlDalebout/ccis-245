#include <iostream>
#include <iomanip>
#include "Date.h"

Date::Date(const Date & date)
    : yyyy_(date.yyyy_), mm_(date.mm_), dd_(date.dd_)
    {}

Date::~Date()
{
    std::cout << "Deconstructing file" << '\n';
}

void Date::add_y(int v) { yyyy_ += v; }
void Date::add_m(int v) { mm_   += v; }
void Date::add_d(int v) { dd_   += v; }
 
bool Date::operator==(const Date & date) const
{
    return (yyyy_==date.yyyy_ && mm_ == date.mm_ && dd_ == date.dd_);
}

bool Date::operator!=(const Date & date) const
{
    return !operator==(date);
}

std::ostream & operator<<(std::ostream & cout, const Date & date) 
{
    cout << '{'  << std::setw(4) << std::setfill('0') << date.year()
         << ", " << std::setw(2) << std::setfill('0') << date.month()
         << ", " << std::setw(2) << std::setfill('0') << date.day()
         << '}';
    return cout;
}

#include <iostream>
#include <iomanip>
#include "Date.h"

void Date::init(int y, int m, int d)
{
    yyyy_ = y;
    mm_ = m;
    dd_ = d;
}

void init(int i, int j, int k)
{
    
}

int Date::get_y()
{
    return yyyy_;
}

int Date::get_m()
{
    return mm_;
}

int Date::get_d()
{
    return dd_;
}

void Date::set_y(int y)
{
    yyyy_ = y;
}

void Date::set_m(int m)
{
    mm_ = m;
}

void Date::set_d(int d)
{
    dd_ = d;
}

void Date::print()
{
    std::cout << '{'  << std::setw(4) << std::setfill('0') << yyyy_
              << ", " << std::setw(2) << std::setfill('0') << mm_
              << ", " << std::setw(2) << std::setfill('0') << dd_
              << "}\n";
}

void Date::add_y(int y)
{
    yyyy_ += y;
}

void Date::add_m(int m)
{
    mm_ += m;
}

void Date::add_d(int d)
{
    dd_ += d;
}

void Date::add_m_d(int m, int d)
{
    mm_ += m;
    dd_ += d;
}

void Date::add_date(const Date & d)
{
    yyyy_ += d.yyyy_;
    mm_ += d.mm_;
    dd_ += d.dd_;
}

bool Date::equal(const Date & d)
{
    return (yyyy_ == d.yyyy_
            && mm_ == d.mm_
            && dd_ == d.dd_);

}

bool Date::operator==(const Date & d)
{
    return (yyyy_ == d.yyyy_
            && mm_ == d.mm_
            && dd_ == d.dd_);
}

bool Date::operator!=(const Date & d)
{
    return !operator==(d);
}


std::ostream & operator<<(std::ostream & cout,  Date & d)
{
    cout << '{'  << std::setw(4) << std::setfill('0') << d.get_y()
         << ", " << std::setw(2) << std::setfill('0') << d.get_m()
         << ", " << std::setw(2) << std::setfill('0') << d.get_d()
         << "}";

    return cout;
}

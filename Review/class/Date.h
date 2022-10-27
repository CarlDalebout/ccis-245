// File: Date.h

#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
  public:
    Date(int y = 0, int m = 0, int d = 0)
    {
        yyyy_ = y;
        mm_ = m;
        dd_ = d;
    }
    Date(const Date & d)
    {
        yyyy_ = d.yyyy_;
        mm_ = d.mm_;
        dd_ = d.dd_;
    }

    void init(int, int, int);
    
    int get_y();
    int get_m();
    int get_d();

    void set_y(int);
    void set_m(int);
    void set_d(int);

    void print();

    void add_y(int);
    void add_m(int);
    void add_d(int);
    void add_m_d(int, int);
    void add_date(const Date &);

    bool equal(const Date &);

    bool operator==(const Date &);
    bool operator!=(const Date &);

  private:
    int yyyy_, mm_, dd_;
};

void init(int, int, int);

#endif

std::ostream & operator<<(std::ostream &,  Date & d);

#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
  public:
    Date(int y =1970, int m = 1, int d = 1)
    : yyyy_(y), mm_(m), dd_(d)
    {}
    Date(const Date &);
    ~Date();
    void print() const;
    
    int year()  const { return yyyy_; }
    int & year()  { return yyyy_; }
    
    int month() const { return mm_; }
    int & month() { return mm_; }
    
    int day()   const { return dd_; }
    int & day()   { return dd_; }
    

    void add_y(int);
    void add_m(int);
    void add_d(int);

    bool operator==(const Date &) const;
    bool operator!=(const Date &) const;
    
    Date operator+() const;
    
    
  private:
    int yyyy_;
    int mm_;
    int dd_;
};

std::ostream & operator<<(std::ostream &, const Date &);

#endif

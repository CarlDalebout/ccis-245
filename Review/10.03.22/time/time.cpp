#include <iostream>
#include <iomanip>
#include "time.h"


void Date_time_int(Date_time_stamp dt, int year, int month, int day, int hour, int min, int sec)
{
    dt.date.year = year;
    dt.date.month = month;
    dt.date.day = day;
    dt.time.hour = hour;
    dt.time.min = min;
    dt.time.sec = sec;
}

void Date_int(Date & d, int y, int m, int d)
{
    d.year = y;
    d.month = m;
    d.day = d;
}

inline
void Date_int(Date & d)
{
    
}

void Time_int(Time & t, int h, int m, int s)
{
    t.hour = h;
    t.min = m;
    t.sec = s;
}

inline
void Time_print(Time & t)
{
    std::cout << std::setw(2) << std::setfill('0')
              << t.hour << ':'
              << std::setw(2) << std::setfill('0')
              << t.min << ':'
              << std::setw(2) << std::setfill('0')
              << t.sec << '\n';
}

inline
void Time_inc_hour(Time & t, int i)
{
    t.hour += i;
}

inline
void Time_inc_min(Time & t, int i)
{
    t.min += i;
}

inline
void Time_inc_sec(Time & t, int i)
{
    t.min += i;
}

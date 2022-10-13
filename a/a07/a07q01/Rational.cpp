#include <iostream>
#include "Rational.h"

//Inside Class
//void Rational::reduce()
//{
    
//}


bool Rational::operator==(const Rational & r) const
{
    Rational temp1(n, d);
    Rational temp2 = {r.n, r.d};
    reduce(temp1);
    reduce(temp2);
    if(temp1.n == temp2.n && temp1.d == temp2.d) return true;
    else return false
}
bool Rational::operator!=(const Rational & r1) const
{
    Rational r0 = {this->n,this->d};
    return !(r0==r1);
}
/*
bool Rational::operator> (const Rational & r) const
{

}
bool Rational::operator>=(const Rational & r) const
{

}
bool Rational::operator< (const Rational & r) const
{

}
bool Rational::operator<=(const Rational & r) const
{

}


Rational &  Rational::operator+=(const Rational & r)
{

}
Rational &  Rational::operator-=(const Rational & r)
{

}
Rational &  Rational::operator*=(const Rational & r)
{

}
Rational & Rational::operator/=(const Rational & r)
{

}


Rational Rational::operator+() const
{

}
Rational Rational::operator-() const
{

}


Rational Rational::operator+(const Rational & r) const
{

}
Rational Rational::operator-(const Rational & r) const
{

}
Rational Rational::operator*(const Rational & r) const
{

}
Rational Rational::operator/(const Rational & r) const
{

}


Rational Rational::abs() const
{

}
Rational Rational::pow(int v) const
{

}


int Rational::get_int() const
{

}
double Rational::get_double() const
{

}

//operator int() const;
//operator double() const;


//Outside Of Class
std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    
    return cout;
}

std::istream & operator>>(std::istream & cin, Raational &r)
{

    return cin;
}
*/

int GCD(int n, int d)
{
    if(d == 0) return n;
    else return GCD(n, d);
}

// int sign(int v)
// {

// }

void reduce(Rational & r)
{
    if(r.get_n() < 0 && r.get_d() < 0)
    {
        r.set_n() *= -1;
        r.set_d() *= -1;
    }
    else if(r.get_n() < 0 || r.get_n() < 0)
    {
        if(r.get_d() < 0)
        {
            r.set_n() *= -1;
            r.set_d() *= -1;
        }
        else{}
    }

    int gcd = GCD(r.get_n(), r.get_d());

    if(gcd < 0)
    {
        gcd *= -1;
    }

    if(gcd > 0)
    {
        r.set_n() /= gcd;
        r.set_d() /= gcd;
    }
    else{}
}


// Rational abs(const Rational & r)
// {

// }

// Rational  pow(const Rational & r, int v)
// {

// }


// // Operations with int on the left
// bool operator==(int v, const Rational & r)
// {

// }

// bool operator!=(int v, const Rational & r)
// {

// }

// bool operator> (int v, const Rational & r)
// {

// }

// bool operator>=(int v, const Rational & r)
// {

// }

// bool operator< (int v, const Rational & r)
// {

// }

// bool operator<=(int v, const Rational & r)
// {

// }


// int & operator+=(int & v, const Rational & r)
// {

// }

// int & operator-=(int & v, const Rational & r)
// {

// }

// int & operator*=(int & v, const Rational & r)
// {

// }

// int & operator/=(int & v, const Rational & r)
// {

// }

// Rational operator+(int v, const Rational & r)
// {

// }

// Rational operator-(int v, const Rational & r)
// {

// }
// Rational operator*(int v, const Rational & r)
// {

// }
// Rational operator/(int v, const Rational & r)
// {

// }

// Operations with double on the left
// (This section is OPTIONAL. Once you implement the corresponding
// functions for int, should should be able to do it very quickly dor
// double.

/*
bool operator==(double, const Rational &);
bool operator!=(double, const Rational &);
bool operator> (double, const Rational &);
bool operator>=(double, const Rational &);
bool operator< (double, const Rational &);
bool operator<=(double, const Rational &);

double & operator+=(double &, const Rational &);
double & operator-=(double &, const Rational &);
double & operator*=(double &, const Rational &);
double & operator/=(double &, const Rational &);

double operator+(double, const Rational &);
double operator-(double, const Rational &);
double operator*(double, const Rational &);
double operator/(double, const Rational &);
*/


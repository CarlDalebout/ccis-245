#include <iostream>
#include <string>
#include "LongInt.h"

bool LongInt::operator==(LongInt & x) const
{
    if(v_.size() != x.size()) return false;
    for(unsigned int i = 0; i <= v_.size(); ++i)
        if(v_[i] != x[i]) return false;
    return true;
}

bool LongInt::operator!=(LongInt & x) const  
{return !(*this == x);}

bool LongInt::operator> (LongInt & x) const  
{
    if(sign_ < x.sign()) return false;
    else if(*this - x < 0) return false;
    else return true;
}
bool LongInt::operator>=(LongInt & x) const  
{
    if(operator==(x)) return true;
    return (operator>(x));
}

bool operator< (LongInt & x) const  
{
    return !(*this > x);
}
bool operator<=(LongInt & x) const  
{
    if(*this == x) return true;
    return (*this < x);
}

//with two LongInt Objects
LongInt &operator+=(const LongInt & x)
{
    bool carry = false, reduce = false;
    int i = 0;
    while(i <=v_.size() ||  i <=x.size())
    {
        if(sign_ == x.sign())
        {
            if(i < v_.size() && i < x.size())
                v_[i] += x[i];
            else if(i > v_.size() && i <= x.size())
                v_.pushback(x[i]);
        }
        else
        {
            if(i < v_.size() && i < x.size())
                v_[i] = (I.x_[i] * I.sign_) + (J.x_[i] * J.sign_) + ret.x_[i];}
            else if(i < I.size_)
            { ret.x_[i] += (I.x_[i] * I.sign_); }
            else if(i < J.size_)
            {ret.x_[i] += (J.x_[i] * J.sign_); }
        }
        
        if(ret.x_[i] > 9)
        {
            ret.x_[i] -= 10;
            if(i > v_.size())
                v_.push_back(1);
            else
                v_[i+1] += 1; 
        }
        else if(ret.x_[i] < 0)
        {
            if(i > v_.size())
            ret.x_[i] += 10;
            
            reduce = true;
        }
        
        ++i;
        
        else if(reduce)
        {
            ret.x_[i] = -1;
            reduce = false;
        }
        else
            ret.x_[i] = 0;
    }
    
    ret.size_ = i - 1;

    if(ret.x_[i] == -1)
    {
        ret.sign_ = -1;
        ret.x_[0] = -1 * (ret.x_[0] - 10);
        for(i = 1;  i < ret.size_; ++i)
        {
            ret.x_[i] = -1 * (ret.x_[i] - 9);
        }
    }

    return *this;
}

LongInt operator-(const LongInt & i , const LongInt & j)
{
    LongInt temp = j;
    temp.sign_ *= -1;
    return(i + temp);
}


// //with int on the right
// LongInt operator+(const LongInt & i, int j)
// {
//     LongInt temp = get_LongInt(j);
//     return (i + temp);
// }
// LongInt operator-(const LongInt & i, int j)
// {
//     LongInt temp = get_LongInt(j);
//     return (i - temp);
// }

// //with int on the left
// LongInt operator+(int i, const LongInt & j)
// {
//     LongInt temp = get_LongInt(i);
//     return (temp + j);
// }
// LongInt operator-(int i, const LongInt & j)
// {
//     LongInt temp = get_LongInt(i);
//     return (temp - j);
// }


std::ostream & operator<<(std::ostream & cout, const LongInt & I)
{
    if(I.sign() == -1) cout << '-';
    for(int i = I.size(); i >= 1; --i)
        cout << I[i-1];
    return cout;
}

std::istream & operator>>(std::istream & cin, LongInt & I)
{
    return cin;
}

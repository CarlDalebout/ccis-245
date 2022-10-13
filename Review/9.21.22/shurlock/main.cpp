#include <iostream>
#include <fstream>
#include "mystring.h"

int findt(char x[])
{
    char t[1024] = "Title: ";
   
    return str_str(x,t);
}

int finda(char x[])
{
    char a[1024] = "Author: ";

    return str_str(x,a);
}

void gett(char s[])
{
    char t[1024];
    int i = findt(s) + 6;
    //std::cout << '\n';
    std::cout<< "The Title is: ";
    while (s[i] != '\n')
    {
        ++i;
        std::cout << s[i];
        t[i]=s[i];
    }

    std::cout << '\n';
}

void geta(char s[])
{
    char a[1024];
    int i = finda(s) + 7;
    std::cout << "The auther is: ";
    while (s[i] != '\n')
    {
        ++i;
        std::cout << s[i];
        a[i] = s[i];
    }

    std::cout << '\n';
    
}

//int finda

int main()
{
    std::ifstream f("/home/student/Downloads/pain.txt", std::ios::in);
    char s[700000];

    int i =0;
    while (f.get(s[i]))
    {
        ++i;
    }
    gett(s);
    geta(s);
    return 0;

    
}

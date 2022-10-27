// File: main.cpp
// Author: Liow

#include <iostream>
#include "Date.h"

int main()
{
    Date today = { 2022, 10, 17 };
    today.print();

    Date yesterday = { 3000, 10, 17 };
    yesterday.print();


    std::cout << today.get_y() << '\n';
    std::cout << today.get_m() << '\n';
    std::cout << today.get_d() << '\n';

    today.set_y(3000);
    std::cout << today.get_y() << '\n';
    
    std::cout << (today != yesterday) << " " <<today << ' ' << yesterday <<'\n'; 
                                
    
    return 0;
}

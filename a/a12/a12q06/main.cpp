#include <iostream>
#include "Fib1.h"
#include "Fib2.h"
#include "Fib3.h"
#include "Fib4.h"
#include "Fib5.h"
int main()
{
    int correct[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    extern Fib5 & fib;

    std::cout << fib(7) << std::endl;
    // std::cout << "Testing Fib1:" << std::endl;
    // Fib1 fib1;
    
    // for(int i = 0; i < 49; ++i)
    // {
    //     std::cout << "Test " << i 
    //               << fib1(i) << std::endl;
    // }

    // std::cout << "Test Fib2:" << std::endl;
    // Fib2 fib2;
    // std::cout << "Test 1 " << (fib2[2] == 0 ? " pass" : " FAIL")
    //           << std::endl;

    // for(int i = 0; i < 10; ++i)
    // {
    //     std::cout << "Test " << i + 2
    //               << (fib2(i) == correct[i] ? " pass" : " FAIL")
    //               << std::endl;
    // }

    // std::cout << "Test 12 " << (fib2[2] == 2 ? " pass" : " FAIL")
    //         << std::endl;

    // std::cout << "Test Fib3:" << std::endl;
    // Fib3 fib3;
    // std::cout << "Test 1" << (Fib3::lookup(2) == -1 ? " pass" : " FAIL")
    //           << std::endl;

    // for(int i = 0; i < 10; ++i)
    // {
    //     std::cout << "Test " << i + 2
    //               << (fib3(i) == correct[i] ? " pass" : " FAIL")
    //               << std::endl;
    // }

    // std::cout << "Test 12" << (Fib3::lookup(2)== 2 ? " pass" : " FAIL")
    //         << std::endl;

    // std::cout << "Testing Fib4:" << std::endl;
    
    // std::cout << "Test 1 "
    //           << (Fib4::lookup(2) == -1 ? "pass" : "FAIL")
    //           << std::endl;

    // Fib4 fib4;
    // for(int i = 0; i < 10; ++i)
    // {
    //     std::cout << "Test " << i + 2 
    //               <<(fib4(i) == correct[i] ? " pass" : " FAIL") 
    //               << std::endl;
    // }
    
    // std::cout << "Test 12 " 
    //           << (fib4(2) == 2 ? "pass" : "FAIL")
    //           << std::endl;

    // Fib4 fib4b(30);
    // std::cout << "Test 13 "
    //           << (fib4(2) == 2 ? "pass" : "FAIL")
    //           << std::endl;
    
    // std::cout << "Test 14 "
    //           << (Fib4::lookup(25) == -1 ? "pass" : "FAIL")
    //           << std::endl;

    
    // std::cout << fib4  << '\n';


    // std::cout << "Testing Fib5:" << std::endl;

    // std::cout << "Test 1 "
    //           << (Fib5::lookup(2) == -1 ? "pass" : "FAIL")
    //           << std::endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout << "Test " << i + 2
    //               << (Fib5::fib5(i) == correct[i] ? " pass" : " FAIL")
    //               << std::endl;
    // }

    // std::cout << "Test 12 "
    //           << (Fib5::lookup(2) == 2 ? "pass" : "FAIL")
    //           << std::endl;

    // Fib5::resize(30);

    // std::cout << "Test 13 "
    //           << (Fib5::lookup(2) == 2 ? "pass" : "FAIL")
    //           << std::endl;
    // std::cout << "Test 14 "
    //           << (Fib5::lookup(25) == -1 ? "pass" : "FAIL")
    //           << std::endl;

    // std::cout << "Testing fib: " << std::endl;
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << "Test " << i + 1
    //               << (fib(i) == correct[i] ? "pass" : "FAIL")
    //               << std::endl;
    // }

    return 0;
}

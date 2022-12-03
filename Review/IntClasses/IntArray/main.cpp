#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a; // a wraps a dyn array, ie a has x_[0 ... 9], size_, cap_=10;
    a.size_ = 4;
    std::cout << a << '\n'; // {1, 3, 5, 2, 4}
    // a.push_back(4);   // {4}
    // a.push_back(6);   // {4, 6}
    // a.push_back(3);   // {4, 6, 3}
    // a.push_front(42); // {42, 4, 6, 3}
    // a.insert(2, 99);  // {42, 4, 99, 6, 3}
    // a.pop_front();    // {4, 99, 6, 3}
    // a.pop_back();     // {4, 99, 6}
    // a.find(99);       // returns index of 99 ie. 1 or pointer to 99
    // a.remove(2);      // {4, 99}
    // a[1];             // returns value at index 1
    // a[2] = 9999999;   // sets index to given value
    // a.sort_ascenting();
    // a.sort_descending();
    // a.binarysearch(v);
    // a.randomize();
    // IntArray b;
    // b = a;
    // a.cout(4);        // number of times 4 occurs in a
    // a.concat(b);      //  
    // a.resize(2);      // 
    return 0;
}

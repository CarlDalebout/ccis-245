#include <iostream>


/*
              x      x               x                    
       x      x      x     x         x          x     x    x

_________________________________________
       0      1      2     3   4     5    6     7     8    9


 */


int dist(int x[], int n, int i)
{
    // computer tot dist travelled to x[i];
    int s =0;
    for(int j =0; j < n; ++j)
    {
        int d = x[i] - x[j];
        d = (d >= 0 ? d: -d);
        s += d;
        //std::cout<< s << '\n';
    }
    // std::cout<< i << ' ' << s << '\n';
    return s;
}



int main()
{
    int x[10] ={5,3,9,3,1,2,8,7,5,2};
    int n = 10;

    int min_s;
    int min_index;

    min_s = dist(x, n, 0);
    min_index = 0;
    
    for(int i =0; i<n; ++i)//i is target house
    {
        int s = dist(x,n,i);    
        if(s < min_s)
        {
            min_s = s;
            min_index = i;
        }
        std::cout << i << ' ' << s << ' ' << min_s << ' ' << min_index << '\n'; 
    }

    std::sort(x);
    std::cout << x[n / 2] << '\n';
    // int total_moves = 0;
    // int lest_moves;
    // int house = 0;
        
    //     for(int i = 0; i<10; ++i)
    //     {
    //         total_moves = 0;
    //         for(int j =0; j<10; ++j)
    //         {
    //             if(x[j]>i)
    //                 total_moves += x[j]-i;
    //             else
    //                 total_moves += i-x[j];
    //             if(i=0)
    //             {
    //                 lest_moves = total_moves;
    //             }
    //         }
    //         if(total_moves<lest_moves)
    //         {
    //             house = i;
    //             lest_moves = total_moves;
    //         }
    //     }
    //     std::cout<< house << '\n';


    
    return 0;
}

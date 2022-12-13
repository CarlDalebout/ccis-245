#include <iostream>

// max of values at addr start, start + .... end - 1;
//
//  . . . . . . . . . .
//  5                   e
int max0(int * start, int * end)
{
    if(start >= end -1) // base case
        return *start;
    else // recursive
    {
        int maximum = max0(start, end -1);
        int lastval = *(end -1);
        return (maximum >= lastval ? maximum : lastval);
    }
}

int max1(int * start, int * end)
{
    if(start + 1 >= end) // base case
        return *start;
    else // recursive
    {
        int maximum = max0(start + 1, end);
        int firstval = *start;
        return (maximum >= firstval ? maximum : firstval);
    }
}

int max2(int * start, int * end)
{
    int * mid = p + (end - start) / 2;
    int leftmax = max2(start, mid);
    int rightmax = max2(mid, start);
    return (leftmax >= rightmax ? leftmax : rightmax);
}

void swap(int * p, int * q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

void bubblesort_pass(int * start, int * end)
{
    if(start >= end-1)
    {}
    else
    {
        if(*start > *(start + 1))
        {
            swap(start, start +1);
        }
        bubblesort_pass(start + 1, end);
    }
}

void bubblesort(int * start, int * end)
{
    if(start >= end -1)
    {
        
    }
    else
    {
        //for(int p = end; p >= start --p)
        bubblesort_pass(start, end);
        bubblesort(start, end -1);
    }
}

int binarysearch(int x[], int left, int right, int target)
{
    if(left > right)
        return -1;
    else
    {
        int mid = (left + right)/2;
        if(x[mid] == target)
            return mid;
        else if([x][mid] > target)
            return binarysearch(x, left, mid, target);
        else
            return binarysearch(x, mid, right, target);
    }
}

void println(int * start, int * end)
{
    if(start > end -1)
    {
        std::cout << '\n';
    }
    else
    {
        std::cout << *start << ' ';
        println(start + 1, end);
    }
}

int main()
{
    int x[] = { 8, 6, 5, 4, 2, 0, 1, 3, 5, 7, 9};
    bubblesort(&x[0], &x[11]);
    println(&x[0], &x[11]);
    return 0;
}


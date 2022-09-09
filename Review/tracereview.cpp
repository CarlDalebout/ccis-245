#include<iostream>
#include<cstdlib>
#include<ctime>

void fillArray(int x[], int n);
void print(int x[], int n);
void println(int x[], int n);
void bobbleSort(int x[],int n);
int findMax(int x[], int n);
int binarysearch(int x[], int n, int target);

int main()
{
    std::srand(time(0));

    int n = 10;
    int x[n];
    
    fillArray(x,n);
    println(x,n);
    
    bobbleSort(x,n);
    std::cout<<"completed bobble sort: ";
    println(x,n);
    std::cout<<"The max is :" << findMax(x,n)<< '\n';

    int target = 0;
    std::cin>> target;
    int i = binarysearch(x,n, target)+1;
    std::cout<< "Target is in :" << i << '\n';

    return 0;
}

void print(int x[], int n)
{
    for(int i=0; i<n; ++i)
    {
        std::cout<<x[i]<<" ";
    }
}

void println(int x[], int n)
{
    print(x,n);
    std::cout<<'\n';
    
}
void fillArray(int x[], int n)
{
    for(int i=0; i<n; ++i)
    {
        x[i]=rand()%20+1;
    }
    
}

int findMax(int x[], int n)
{
    int max=-1;

    for(int i=0; i<n; i++)
    {
        if(max<x[i])
        {
            max = x[i];
        }
    }
    return max;
}

int  binarysearch(int x[], int n, int target)
{
    int left =0, right =n-1;
    while(left<= right)
    {
        int mid= ( left + right)/ 2;
        std::cout << left << ' ' << mid << ' ' << right << '\n';
        if(x[mid]==target)
        {
            return mid;
        }
        else if(x[mid] < target)
        {
            left = mid +1;
        }
        else
        {
            right = mid -1;
        }
        std::cout << left << ' ' << mid << ' ' << right << '\n';
        std::cout << '\n';
    }
    return -1;
}

void bobbleSort(int x[], int n) 
{
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; i>j; j++)
        {
            if(x[j]>x[j+1])
            {
                int t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
            println(x,n);
        }
        std::cout<<'\n';
    }
}

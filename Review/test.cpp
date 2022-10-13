#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
    srand(time(0));
    for(int i =0; i< 200; i++)
    {
        std::cout<< (rand()%100)/9.7-1.1 << ' ';
    }
    std::cout<<'\n';
}

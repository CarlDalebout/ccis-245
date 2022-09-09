#include<iostream>

int main(){

    int n=0;
    std::cin>>n;
    for(int i =0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            std::cout<<' ';

        }
        switch(i%2){
            case 0:
                for(int j=0; j<i+1; j++)
                {
                    std::cout<<(j%2==0? '*' : '-');
                }
                std::cout<<"\n";
                break;
            case 1:
                for(int j=0; j<i+1; j++)
                {
                    std::cout<<'-';
                }
                std::cout<<"\n";
                break;
        }
    }
    return 0;
}

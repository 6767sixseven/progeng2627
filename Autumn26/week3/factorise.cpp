#include<iostream>

int main(){
    int n, i;
    std::cout << "integer(n>=2) that you want to factorise: "<< std::endl;
    std::cin >> n;
    std::cout << n << " = ";
    for(i=2; i<=n; i++){
        while(n%i==0 && n/i!=1){
            n= n/i;
            std::cout << i << " * ";
        }
         if(n%i==0 && n/i==1){
            std::cout << i ;
            return 0;
        }
    }
}
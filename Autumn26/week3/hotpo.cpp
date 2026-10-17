#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    while( n!=1 ){
        std::cout << n << "\t";
        if(n%2==0){
            n=n/2;
        }
        else{
            n= 3*n+1;
        }

    }
    std::cout << n << "\t";
    return 0;
}

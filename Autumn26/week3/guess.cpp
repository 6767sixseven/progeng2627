#include <iostream>
#include <cmath>

int main(){
    int top=100, btm=0, n;

    std::cout << "The range is 0 to 100, think of a number."<< std::endl;
    int flag;
    while (flag!=2){
        n= (top + btm)/2;
        std::cout << "I guess " << n << std::endl;
        std::cout << "is that larger(0), smaller(1), or equal(2)?" << std::endl;
        std::cin >> flag;
        if(flag==0){
            top=n;
        }
        else if(flag==1){
            btm=n;
        }
    }
    std::cout << "your number is " << n;
    return 0;
}
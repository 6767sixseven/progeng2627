#include <iostream>
#include <cmath>

int main(){
    double a, b, c;

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b && a>0 && b>0 && c>0){
        std::cout << "valid triangle"<< std::endl;

    }
    else{
        std::cout << "not valid triangle"<< std::endl;
        return 0;
    }
    // Check whether the sides form a valid triangle

    // If valid:
    if(a==b==c){
        std::cout << "equilateral"<< std::endl;

    }
    else if(a==b || b==c || a==c){
        std::cout << "isosceles"<< std::endl;
    }
    else{
        std::cout << "scalene"<< std::endl;
    }
    //   Determine and display the type of triangle
    double s= a+b+c;
    std::cout << "its perimeter is " << s << std::endl;
    //   Calculate and display the perimeter
    s/=2;
    double area= std::sqrt(s* (s-a)*(s-b)*(s-c));

    std::cout << "its area is " << area << std::endl;
    //   Calculate and display the area using Heron's formula

    // Otherwise:
    //   Display a message saying the triangle is invalid
    return 0;
}
#include <iostream>
#include <cmath>
int main() {

    std::cout << "Program to find hypotenuse of right angled triangle(in cm)" << '\n';
    double hypotenuse;
    double side1;
    double side2;
    std::cout << "Enter side 1: " << '\n';
    std::cin >> side1;
    std::cout << "Enter side 2: " << '\n'; 
    std::cin >> side2;
    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
    std::cout << "Hypotenuse: " << hypotenuse << "cm ";
    return 0;

}
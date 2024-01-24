#include <iostream>
#include <cmath>

int main() {

    std::cout << "Simple calculator in c++" << '\n';
    std::cout << "Operation 1:- Addition" << '\n' << "Operation 2 :- Subtraction" <<
     '\n' << "Operation 3 :- Multiplication" << '\n' << "Operation 4 :- Division" << '\n' <<
      "Operation 5 :- Power" << '\n' <<"Operation 6 :- exit" << '\n';

    double a;
    double b;
    double c;
    std::cin >> a;

    if (a == 6){
        std::cout << "exiting...";
        
    }else {
    
    

    std::cout << "choose no 1: " << '\n';
    std::cin >> b;
    std::cout << "choose no 2: " << '\n';
    std::cin >> c;

    if(a == 1){
        std::cout << "doing additon " << '\n' << b+c << '\n' ;

    } else if (a == 2){
        std::cout << "doing subtraction" << '\n' << b - c << '\n';

    } else if (a == 3) {
        std::cout << "doing multiplication " << '\n' << b * c << '\n';

    } else if (a == 4 ){
        std::cout << "doing division" << '\n' << b/c << '\n';

    } else if (a == 5){
        std::cout << "raising to power" << '\n' << pow(b , c) << '\n';

    }
    else {
        std::cout << "Invalid";

    }
    }
    return 0 ;

}
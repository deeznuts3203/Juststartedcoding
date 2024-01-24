#include <iostream>
#include <cmath>

int main() {
<<<<<<< HEAD

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
=======
    std::cout << "Choose an operation" << '\n';
    std::cout << "1. Add" << '\n' << "2. Subtract" << '\n' << "3. Multiply" << '\n' << "4. Divide" << '\n';\
    int operation;
    // no if else so only limited to one select operation
    std::cin >> operation;
    std::cout << operation << " Operation" << '\n' << "only one operation(addition)is permitted and to update, please update the code" << '\n';
    int no_1;
    int no_2;
    std::cout << "Enter no 1 " << '\n';
    std::cin >> no_1;
    std::cout << "Enter no 2 " << '\n';
    std::cin >> no_2;
    std::cout << double (no_1 + no_2) << '\n';
    std::cout << "is the output";
    return 0;
>>>>>>> be985d60e6d7ea496fadaea3767e451d2731a7d7

}

#include <iostream>

int main() {
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
    std::cout << double (no_1 + no_2);
    return 0;

}
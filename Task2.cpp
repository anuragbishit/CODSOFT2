//TASK:-2 =  Develop a Calculator program that performs basic arithmatic operatio such 
// as addition , substraction, Multiplication , and division.Allow the user to input 
// two numbers and choose an operation to perform.

#include <iostream>
using namespace std;

int main() {
    
    double numA, numB, result;
    char operation;

    std::cout << "Hey Jarvis Insert your first choice/number: ";
    std::cin >> numA;

    std::cout << "Hey Jarvis Insert your second choice/number: ";
    std::cin >> numB;

    std::cout << " Jarvis Choose the operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
            result = numA + numB;
            break;
        case '-':
            result = numA - numB;
            break;
        case '*':
            result = numA * numB;
            break;
        case '/':
            if (numB != 0) {
                result = numA / numB;
            } else {
                std::cout << "Error: Division by zero<<endl";
                return 0;  
            }
            break;
        default:
            std::cout << "Error: Invalid operation<<endl";
            return 0;  
    }

    std::cout << " Jarvis your Result is : " << result << std::endl;

    return 0; 
}
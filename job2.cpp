#include <iostream> 

int main() {
    double firstNumber, secondNumber, result;

    std::cout << "Enter the first number : ";
    std::cin >> firstNumber;  

    std::cout << "Enter the second number : ";
    std::cin >> secondNumber; 

    result = firstNumber * secondNumber;  

    std::cout << "The result of " << firstNumber << " multiplied by " << secondNumber << " is : " << result << std::endl;

    return 0;  
}

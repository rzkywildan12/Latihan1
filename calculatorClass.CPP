#include <iostream>

class Calculator {
public:
    // Function to add two numbers
    double add(double a, double b) {
        return a + b;
    }
    
    // Function to subtract two numbers
    double subtract(double a, double b) {
        return a - b;
    }
    
    // Function to multiply two numbers
    double multiply(double a, double b) {
        return a * b;
    }
    
    // Function to divide two numbers
    double divide(double a, double b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char op;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    double result;
    switch (op) {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            std::cerr << "Invalid operator!" << std::endl;
            return 1;
    }
    
    std::cout << "Result: " << result << std::endl;
    return 0;
}

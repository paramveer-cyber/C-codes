#include <iostream>

int main(){
    int choice, num1, num2, result;
    std :: cout << "This is a code for a calculator in C++";
    std :: cout << "\nPlease enter 1 to add";
    std :: cout << "\nPlease enter 2 to subtract";
    std :: cout << "\nPlease enter 3 to multiply";
    std :: cout << "\nPlease enter 4 to divide";
    std :: cout << "\nEnter the choice: ";
    std :: cin >> choice;
    if (choice == 1){
        std :: cout << "Please enter the first number: ";
        std :: cin >> num1;
        std :: cout << "Please enter the second number: ";
        std :: cin >> num2;
        result = num1 + num2;
        std :: cout << "The answer is " << result;
    }
    else if (choice == 2){
        std :: cout << "Please enter the first number: ";
        std :: cin >> num1;
        std :: cout << "Please enter the second number: ";
        std :: cin >> num2;
        result = num1 - num2;
        std :: cout << "The answer is " << result;
    }
    else if (choice == 3){
        std :: cout << "Please enter the first number: ";
        std :: cin >> num1;
        std :: cout << "Please enter the second number: ";
        std :: cin >> num2;
        result = num1 * num2;
        std :: cout << "The answer is " << result;
    }
    else if (choice == 4){
        std :: cout << "Please enter the first number: ";
        std :: cin >> num1;
        std :: cout << "Please enter the second number: ";
        std :: cin >> num2;
        result = num1 / num2;
        std :: cout << "The answer is " << result;
    }
}
#include <iostream>
using namespace std;

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to calculate factorial
int factorial(int x) {
    if (x <= 1)
        return 1;
    else
        return x * factorial(x - 1);
}

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int choice, num1, num2;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Factorial" << endl;
        cout << "4. GCD (Greatest Common Divisor)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Addition
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result of addition: " << add(num1, num2) << endl;
            break;
        case 2:
            // Subtraction
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result of subtraction: " << subtract(num1, num2) << endl;
            break;
        case 3:
            // Factorial
            cout << "Enter a number to calculate its factorial: ";
            cin >> num1;
            cout << "Factorial of " << num1 << " is: " << factorial(num1) << endl;
            break;
        case 4:
            // GCD
            cout << "Enter two numbers to calculate GCD: ";
            cin >> num1 >> num2;
            cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl; 
    } while (choice != 5); // != not equal to 5, meaning if it's not 5, it will repeat again and again
    return 0;
}

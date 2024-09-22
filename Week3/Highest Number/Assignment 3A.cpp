#include <iostream>
using namespace std;

int main() {
    // Declare three variables to store user input
    int num1, num2, num3;

    // Prompt the user for input
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Determine the highest number
    int highest = num1; // Assume the first number is the highest

    if (num2 > highest) {
        highest = num2; // Update if the second number is higher
    }

    if (num3 > highest) {
        highest = num3; // Update if the third number is higher
    }

    // Output the highest number
    cout << "The highest number is: " << highest << endl;

    return 0;
}
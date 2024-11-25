#include <iostream>

using namespace std;

int main() {
    int num;
    int factorial = 1;
    cout << "Input a non-negative number!"<<endl;
    cin >> num;
    if (num < 0) {
        cout << "Error, please try again using non-negative number, or try using a number more than 0!" << endl;
        return 1;
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i; 
        }
        cout << "The factorial of " << num << " is " << factorial << "." << endl;
    }

    return 0;
}

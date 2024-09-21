#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user for input
    cout << "Enter an integer: ";
    cin >> n;

    // Print the multiplication table for n
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
    
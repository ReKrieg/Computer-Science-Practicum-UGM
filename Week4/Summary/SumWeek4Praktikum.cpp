#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Prompt the user for input
    cout << "Enter a positive integer: ";
    cin >> n;

    // Loop from 1 to n (inclusive) and calculate the sum
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the result
    cout << "The sum of all natural numbers up to " << n << " is: " << sum << endl;

    return 0;
}

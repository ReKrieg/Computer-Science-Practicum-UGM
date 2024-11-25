#include <iostream>
using namespace std;

int main() {
    int n;
    int num;
    int maxNum;
    
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    
    if (n <= 0) {
        cout << "You must enter at least one number!" << endl;
        return 1;
    }

    
    cout << "Enter the numbers:" << endl;
    cin >> maxNum;

    
    for (int i = 1; i < n; ++i) {
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
    }
    cout << "The max number from the amount of numbers is: " << maxNum;

    return 0;
}

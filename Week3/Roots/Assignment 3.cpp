#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    
    // input
    cout << "Type number for A: " << endl; 
    cin >> a;
    cout << "Type number for B: "<< endl;
    cin >> b;
    cout << "Type number for C: " << endl;
    cin >> c;

 
    float disc = (b*b) - (4*a*c);
    
    if (disc > 0) {
        float sqdisc = sqrt(disc);
        float xa = (-b + sqdisc) / (2*a);
        float xb = (-b - sqdisc) / (2*a);   
        cout << "\nThe first root is " << xa;
        cout << "\nThe second root is " << xb;
    }
    else if (disc == 0) {
        float x = -b/(2*a);
        cout << "\nThe root is " << x;
    }
    else if (disc < 0) {
        cout << "\nThere are no real roots"; 
    }
    
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
std::cout << fixed;
std::cout << setprecision(0);
string name;
cout<<"Enter Employee Name: ";
cin >> name;
float a;
cout<<"Enter Gross Salary: ";
cin >> a;
float h[5];
float b;
cout<<"Enter tax percentage: ";
cin >> b;
float c;
cout<<"Enter installment cost: ";
cin >> c;
float d;
cout<<"Enter insurance cost: ";
cin >> d;
float e;
e = b/100; //Make number into percentage
h[0] = a; //Gross Salary
h[1] = a*e; //Tax
h[2] = c; //Installment
h[3] = d; //Insurance
h[4] = h[0]-h[1]-h[2]-h[3]; //Nett salary
cout<<"Payslip for Employee"<<endl<<
"-----------------------"<<endl<<
"Name: "<<name<<endl<<
"Gross Salary: Rp. "<<h[0]<<endl<<
"Tax (20%): Rp. "<<h[1]<<endl<<
"Installment: Rp. "<<h[2]<<endl<<
"Insurance: Rp. "<<h[3]<<endl<<
"Nett Salary: Rp. "<<h[4];
}
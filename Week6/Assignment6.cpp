#include <iostream>
using namespace std;

struct StudentData {
    int nim;
    int uts;
    int uas;
    float average;
};

StudentData theStudent[50];

int main()
{
    int n;
    cout<<"How many students would you like to enter? ";
    cin>>n;
    cout<<"Data Mahasiswa"<<endl<<"======================="<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"NIM mahasiswa: "<<endl;
        cin>>theStudent[i].nim;
        cout<<"Nilai UTS: "<<endl;
        cin>>theStudent[i].uts;
        cout<<"Nilai UAS: "<<endl;
        cin>>theStudent[i].uas;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<"======================="<<endl;
        cout<<"Nim mahasiswa: "<<theStudent[i].nim<<endl;
        cout<<"Average: "<<(theStudent[i].uas+theStudent[i].uts)/2<<endl;
    }
    
}
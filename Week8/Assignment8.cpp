#include <iostream>
#include <vector>
using namespace std;

struct Student {
    long long NISN;
    string name;
    int value;
};


void display(vector<Student>& students) {
    for (auto& s : students)
        cout << s.NISN << " " << s.name << " " << s.value << endl;
}


void sortStudents(vector<Student>& students, bool sortByValue) {
    for (int i = 1; i < students.size(); i++) {
        for (int j = i; j > 0; j--) {
            if ((sortByValue && students[j].value > students[j - 1].value) || 
                (!sortByValue && students[j].NISN > students[j - 1].NISN)) {
                swap(students[j], students[j - 1]);
            }
        }
    }
}


int findNISN(vector<Student>& students, long long target) {
    int left = 0, right = students.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (students[mid].NISN == target) return mid;
        if (students[mid].NISN < target) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}


void updateName(vector<Student>& students, int targetValue, string newName) {
    for (auto& s : students) {
        if (s.value == targetValue) {
            s.name = newName;
        }
    }
}

int main() {
    vector<Student> students = {
        {9960312699, "Handi", 90},
        {9963959682, "Rio", 55},
        {9950310962, "Ronaldo", 80},
        {9970272750, "Achmad", 60},
        {9970293945, "Alivia", 70},
        {9952382180, "Ari", 65},
        {9965653989, "Arief", 60}
    };

    cout << "Original Data:\n";
    display(students);


    sortStudents(students, false);
    cout << "\nSorted by NISN:\n";
    display(students);


    int index = findNISN(students, 9950310962);
    if (index != -1) cout << "\nFound NISN 9950310962: Value = " << students[index].value << endl;
    else cout << "\nNISN 9950310962 not found.\n";


    updateName(students, 60, "Joko");
    cout << "\nData after updating name for Value = 60:\n";
    display(students);

    return 0;
}

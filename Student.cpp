#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    int rollNo;
    string name;
    char div;

    void accept() {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Division: ";
        cin >> div;
    }

    void modifyname() {
        cout << "\nEnter the new name: ";
        cin >> name;
    }
    void modifydiv() {
        cout << "\nEnter the new Division: ";
        cin >> div;
    }

    int getRollNo() const {
        return rollNo;
    }

    void display() const {
        cout << "\n" << rollNo << "\t" << name << "\t" << div << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students(n);


    for (int i = 0; i < n; i++) {
        students[i].accept();
    }


    cout << "\nDetails of all students:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

   
    int r;
    cout << "Enter roll number to modify name: ";
    cin >> r;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (students[i].getRollNo() == r) {
            students[i].modifyname();
            students[i].modifydiv();
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Student with roll number " << r << " not found." << endl;
    }

 
    cout << "\nDetails of all students after modification:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    return 0;
}


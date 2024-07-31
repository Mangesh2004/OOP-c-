#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    string studentClass;
    char division;
    string dob;
    string bloodGroup;
    string contactAddress;
    string telephoneNumber;
    string drivingLicenseNumber;

public:
    // Default constructor
    Student()
    {
        name = "";
        rollNumber = 0; // Assign roll number based on student count
        studentClass = "";
        division = '\0';
        dob = "";
        bloodGroup = "";
        contactAddress = "";
        telephoneNumber = "";
        drivingLicenseNumber = "";
    }

    // Parameterized constructor
    Student(string name, string studentClass, char division, string dob,
            string bloodGroup, string contactAddress, long telephoneNumber, string drivingLicenseNumber)
    {
        this->name = name;
        this->rollNumber = 0;
        this->studentClass = studentClass;
        this->division = division;
        this->dob = dob;
        this->bloodGroup = bloodGroup;
        this->contactAddress = contactAddress;
        this->telephoneNumber = telephoneNumber;
        this->drivingLicenseNumber = drivingLicenseNumber;
    }

    // Member functions
    void getData();
    void displayData() const;
    void modifyData();
    void deleteData();

    // Inline function to get roll number
    inline int getRollNumber() const
    {
        return this->rollNumber;
    }
};

// Member function to get student data
void Student::getData()
{
    cout << "Enter Roll No: ";
    cin >> rollNumber;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Class: ";
    cin >> studentClass;
    cout << "Enter Division: ";
    cin >> division;
    cout << "Enter Date of Birth (DD/MM/YYYY): ";
    cin >> dob;
    cout << "Enter Blood Group: ";
    cin >> bloodGroup;
    cout << "Enter Contact Address: ";
    cin >> contactAddress;
    cout << "Enter Telephone Number: ";
    cin >> telephoneNumber;
    cout << "Enter Driving License Number: ";
    cin >> drivingLicenseNumber;
}

// Member function to display student data
void Student::displayData() const
{
    if (rollNumber != -1)
    { // Only display if the record is not deleted

        cout << "Roll No: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Division: " << division << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Contact Address: " << contactAddress << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Driving License Number: " << drivingLicenseNumber << endl;
    }
    else
    {
        cout << "This record has been deleted." << endl;
    }
}

// Member function to modify student data
void Student::modifyData()
{
    int choice;
    cout << "Modify: 1. Name 2. Class 3. Division 4. DOB 5. Blood Group 6. Contact Address 7. Telephone Number 8. Driving License Number: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter new Name: ";
        cin >> name;
        break;
    case 2:
        cout << "Enter new Class: ";
        cin >> studentClass;
        break;
    case 3:
        cout << "Enter new Division: ";
        cin >> division;
        break;
    case 4:
        cout << "Enter new DOB: ";
        cin >> dob;
        break;
    case 5:
        cout << "Enter new Blood Group: ";
        cin >> bloodGroup;
        break;
    case 6:
        cout << "Enter new Contact Address: ";
        cin >> contactAddress;
        break;
    case 7:
        cout << "Enter new Telephone Number: ";
        cin >> telephoneNumber;
        break;
    case 8:
        cout << "Enter new Driving License Number: ";
        cin >> drivingLicenseNumber;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
}

// Member function to delete student data
void Student::deleteData()
{
    name = "";
    rollNumber = -1;
    studentClass = "";
    division = '\0';
    dob = "";
    bloodGroup = "";
    contactAddress = "";
    telephoneNumber = "";
    drivingLicenseNumber = "";
}


int main() {
    
    Student students[10];
    int n = 0;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Modify Student Data\n";
        cout << "4. Delete Student Data\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n < 10) {
                    cout << "Enter details for student " << (n + 1) << ":\n";
                    students[n].getData();
                    n++;
                }
                break;
            case 2:
                cout << "\nDisplaying student details:\n";
                for (int i = 0; i < n; i++) {
                    students[i].displayData();
                    cout << endl;
                }
                
                break;
            case 3:
                int rollNumberToModify;
                cout << "Enter roll number of the student to modify: ";
                cin >> rollNumberToModify;
                for (int i = 0; i < n; i++) {
                    if (students[i].getRollNumber() == rollNumberToModify) {
                        students[i].modifyData();
                        break;
                    }
                }
                break;
            case 4:
                int rollNumberToDelete;
                cout << "Enter roll number of the student to delete: ";
                cin >> rollNumberToDelete;
                for (int i = 0; i < n; i++) {
                    if (students[i].getRollNumber() == rollNumberToDelete) {
                        students[i].deleteData();
                        break;
                    }
                }
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
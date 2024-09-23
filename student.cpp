#include <iostream>
using namespace std;
class student
{

    string rollno;
    string name;
    string percentage;

public:
    void accept();
    void display();
};
void student::accept()
{
    cout << "enter rollno" << endl;
    cin >> rollno;
    cout << "enter name" << endl;
    cin >> name;
    cout << "enter percentage" << endl;
    cin >> percentage;
};
void student::display()
{
    cout << rollno << name << percentage << endl;
};
int main()
{
    student s;
    s.accept();
    s.display();
}
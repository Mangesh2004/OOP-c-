#include <iostream>
#include <string>


using namespace std;

class Student {
public:
    int rollNo;
    string name;
    char div;

    inline void accept() {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Division: ";
        cin >> div;
    }

    inline void modifyname() {
        cout << "\nEnter the new name: ";
        cin >> name;
    }
    inline void modifydiv() {
        cout << "\nEnter the new Division: ";
        cin >> div;
    }

    inline int getRollNo() const {
        return rollNo;
    }

    inline void display() const {
        cout << "\n" << rollNo << "\n" << name << "\n" << div << endl;
    }
    inline void remove() {
    	rollNo=-1;
    	name="";
    	div='\0';
    }
};

int main() {
    
   Student students[5];
   
   


    for (int i = 0; i < 5; i++) {
        students[i].accept();
    }


    cout << "\nDetails of all students:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }
	int op;
   cout<<"What you want to perform"<<endl;
   cout<<"1.Modify"<<endl;
   cout<<"2.Delete"<<endl;
   cin>>op;
   switch(op){
   	case 1:
   		int r;
		    cout << "Enter roll number to modify name: ";
		    cin >> r;


		    for (int i = 0; i < 5; i++) {
			 if (students[i].getRollNo() == r) {
			     students[i].modifyname();
			     students[i].modifydiv();

			     break; 
			 }
		    }

		   

		 
		    cout << "\nDetails of all students after modification:\n";
		    for (int i = 0; i < 5; i++) {
			 students[i].display();}
   			 break;
    
    case 2:
    cout<<"\n Enter the roll no you want to delete"<<endl;
    cin>> r;
    for (int i = 0; i < 5; i++) {
    	if(students[i].getRollNo() == r){
    		students[i].remove();
    	}
    }
    cout << "\nDetails of all students after modification:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }
    	break;
    
    }
   	
    

    return 0;
}


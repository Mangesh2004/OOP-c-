#include <iostream>
using namespace std;
class Uminus{
    public:
    int hr,min,sec;
    public:
    void accept(){
        cout<<"enter hr"<<endl;
        cin>>hr;
        cout<<"enter min"<<endl;
        cin>>min;
        cout<<"enter sec"<<endl;
        cin>>sec;
    };
    void operator - (){
        hr=-hr;
        min=-min;
        sec=-sec;
    };
    void display(){
        cout<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
};
int main(){
    Uminus u1,u2;
    u1.accept();
    u1.display();
    -u1;
    u1.display();
    u2.accept();
    u2.display();
    -u2;
    u2.display();
}
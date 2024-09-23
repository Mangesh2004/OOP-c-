//write a cpp program to implement preincrement operator for kilometer and meter 
#include <iostream>
using namespace std;
class Distance{
    public:
    int km,m;
    public:
    void accept(){
        cout<<"Enter in km"<<endl;
        cin>>km;
        cout<<"Enter in m"<<endl;
        cin>>m;
    };
    void operator ++ (){
        km+=1;
        m+=1;
    };
    void display(){
        cout<<km<<"   "<<m<<endl;
    };

};
int main(){
    Distance d;
    d.accept();
    d.display();
    ++d;
    d.display();
}
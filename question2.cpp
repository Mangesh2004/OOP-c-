#include <iostream>
using namespace std;
class Complex{
    public: 
    int real , img;
    public:
    void accept(){
        cout<<"Enter the real no:"<<endl;
        cin>>real;
        cout<<"Enter the img no:"<<endl;
        cin>>img;
    };
    Complex operator + ( Complex c){
        Complex c3;
        c3.real=c.real+real;
        c3.img=c.img+img;
        return c3;
    };
    void Display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    };
};
int main(){
    Complex c1,c2,c3;
    c1.accept();
    c2.accept();
    c3=c1+c2;

    c3.Display();
    return 0;
}
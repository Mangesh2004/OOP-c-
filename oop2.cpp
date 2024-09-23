#include <iostream>
using namespace std;
class Mult{
public:
	void mult(int a, int b){
	cout<<"multiplication is"<<a*b<<endl;
	}
	void mult(int a, float b){
	cout<<"multiplication is"<<a*b<<endl;
	}
	void mult(int a, float b, float c){
	cout<<"multiplication is"<<a*b*c<<endl;
	}


};

int main(){
Mult A;
A.mult(10,10);
A.mult(10,12.1f);
A.mult(10,12.4f,23.3f);
}


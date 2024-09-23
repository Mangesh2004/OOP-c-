#include <iostream>
using namespace std;
class Addition{
public:
	void add(int a, int b){
	cout<<"addition is"<<a+b<<endl;
	}
	void add(int a, float b){
	cout<<"addition is"<<a+b<<endl;
	}
	void add(int a, float b, float c){
	cout<<"addition is"<<a+b+c<<endl;
	}
};

int main(){
Addition A;
A.add(10,10);
A.add(10,12.1f);
A.add(10,12.4f,23.3f);
}


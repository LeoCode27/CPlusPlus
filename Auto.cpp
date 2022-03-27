#include<iostream>
using namespace std;
int main(){
	int a;//declare
	a=0;//initialize
	auto b = a;
	/*using auto, now b is the type of a is int &
	value is 0
	*/
	cout<<"a is : "<<a<<endl;
	cout<<"b is : "<<b<<endl;
	return 0;	
}

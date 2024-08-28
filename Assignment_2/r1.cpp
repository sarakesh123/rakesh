#include<iostream>
using namespace std;

void func(char* str,int& num){
	cout<<"INSIDE FUNCTION:"<<str<<","<<num<<endl;
	}
	
void(*funcptr)(char*,int&);
void takefuncptr(void (*funcptr)(char*,int&)){
	cout<<"INSIDE TAKEFUNCTIONPTR"<<endl;
}
	
void(*returnfuncptr())(char*,int&){
	cout<<"INSIDE RETURN FUNCTION_PTR"<<endl;
	return funcptr;
}
	
void(*passthrough(void(*funcptr)(char*,int&)))(char*,int&){
	cout<<"INSIDE PASS_through"<<endl;
	return funcptr;
}
	
int main(){
	int n=5;
	char c='n';
	func(&c,n);
	funcptr=func;
	takefuncptr(funcptr);
	void(*ptr)(char*,int&)=returnfuncptr();
	
	ptr=passthrough(funcptr);
	
	return 0;
}

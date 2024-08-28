//using global variable

#include<iostream>

int callcount = 0;
void displaycallcount(){
	callcount++;
	std::cout<<"I have ben called"<<callcount<<"times"<<std::endl;
	}
int main(){
	for(int i=0;i<10;++i)
	{
		displaycallcount();
	}
	return 0;
}


//using local static variable

#include<iostream>

void displaycallcount(){
	static int callcount =0;
	callcount++;
	std::cout<<"i have been called"<<callcount<<"times"<<std::endl;
}
int main(){
	for(int i=0;i<10;i++)
	{
		displaycallcount();
	}
	return 0;
}

//static local variable is more appropriate for this scenario as it encapsulates the count within the function scope while preserving the count across function calls.

//A local variable within a function would be reinitialized every time the function is called.This means it would not retain its value between calls,which would not allow it to correctly count the number of times the function has been called.


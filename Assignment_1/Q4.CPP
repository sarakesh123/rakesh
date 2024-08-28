#include<iostream>

using namespace std;

void display(int x){
	int size;
	size = 32;
	bool bits[size];
	for(int i = 0; i<size; ++i){
		bits[i] = false;
	}
	for(int i = 0; i<size; ++i){
		if(x&(1<<i)){
			bits[i] = true;
		}
	}
	//output representation in binary
	
	for(int i = size-1; i>=0; --i){
		if(bits[i])
			cout << 1;
		else
			cout << 0;
	}
	cout << end1

	  



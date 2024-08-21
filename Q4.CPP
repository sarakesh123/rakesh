#include<iostream>
#include<bitset>
using namespace std;

	void printBinary(int num){
	bitset<8> binary(num);
	cout <<binary<<"\n";
}	
int main(){
	int p_i, n_i;
	cout<<"enter a positive integer: ";
	cin>> p_i;
	cout<<"enter a negative integer: ";
	cin>> n_i;
	
	cout<<"Binary Representation of positive integer"<<p_i<<" (8 bits): ";
	printBinary(p_i);
	cout<<"Binary Representation of negative integer"<<n_i<<" (8 bits): ";
	printBinary(n_i);	
return 0;
}




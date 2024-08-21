#include<iostream>
#include<cmath>
using namespace std;

double r_k_p(double n, int k){
	double f=k;
	return round(n* f)/f;
}

int main(){
	double n;
	int k;
cout<<"enter a real number:";
cin>>n;
cout<<"enter a positive integer k(multiple of 10):";
cin>>k;
double r_n =r_k_p(n,k);
cout<<"rounded number:"<<r_n<<"\n";
return 0;
}


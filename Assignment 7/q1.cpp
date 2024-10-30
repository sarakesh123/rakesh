
#include <iostream>
using namespace std;
struct X{
	int i;
	X(int val) : i(val) {};
	X operator+(int val){
    return X(val+i);
    }
};
struct Y{
	int i;
	Y operator+(X x){
    Y y; 
    y.i = x.i+i; 
    return y;
    }
	operator int(){
    return i;
    }
};
ostream& operator<<(ostream& os, X x){
	os << x.i;
	return os;
}
extern X operator*(X x, Y y){return X(x.i*y.i);};
extern int f(X x){return x.i;};
X x = 1;
Y y =y+x;
int i = 2;
int main() {
	cout <<"i+10:"<<i + 10 << endl; //No conversion as both are int. 
	cout <<"y+10:"<<y + X(10) << endl; //The operator+ for Y takes an X object as an argument.
	cout <<"y+10*y:"<<y + X(10) * y << endl; //The multiplication operator * takes X and Y, returning an X. This involves no conversions. 
	cout <<"x+y+i:"<<x + y + i << endl; //The addition x + y uses the overloaded operator+ . 
	cout <<"x*x+i:"<<f(x) * f(x) + i << endl;//f(x) returns an int. This expression results in an int. no conversion is needed . 
	cout <<"f(7):"<<f(7) << endl; //No conversion occurs, as 7 is simply an int.
	cout <<"f(y):"<<f(int(y)) << endl;//int(y) invokes the conversion operator defined in Y, converting Y to int.
	cout <<"y+y:"<<y + y << endl;//The operator+ for Y combines two Y objects. 
	cout <<"106+y:"<<106 + int(y) << endl;//int(y) converts Y to int. The expression becomes int + int. 
}

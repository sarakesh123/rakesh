
#include<iostream>
using namespace std;
struct X
{
X(){cout << "default constructor\n";};
X(X&& x){ cout << "move constructor\n";};
X(const X&x){cout << "copy constructor\n";};
X& operator=(const X&){cout << "copy assignment\n"; return *this;};
~X(){cout << "Destructor\n";};
};
X foo(X x){
return x;
}
int main()
{
X obj;
obj = foo(obj);
}

/*Output
default constructor [When X obj; is executed, the default constructor is called.]
copy constructor [The function foo is called with obj passed by value, so copy constructor is called to create a copy of obj]
move constructor [Inside foo, the local variable x is returned,so the move constructor is called]
copy assignment [This invokes the copy assignment operator because operator= is defined to take a const reference.]
Destructor [ the local copy x goes out of scope, triggering its destructor]
Destructor [When obj goes out of scope ]
Destructor[at the end of main, its destructor is called]
*/

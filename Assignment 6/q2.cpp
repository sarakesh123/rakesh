#include<iostream>
using namespace std;

struct foo{
foo(){cout << "foo()\n" ;}
~foo(){cout <<"~foo()\n";}
int i {5};
};

struct obj{
const foo& getFoo(){return my_foo;};
foo my_foo;
};

int main()
{
obj *o = new obj();
const foo& val = o->getFoo();
cout << "val.i=" << val.i <<std::endl;
delete o;
cout << "val.i=" << val.i <<std::endl;
}

/*Output
   foo()  [ the constructor of foo is called]
   val.i=5
   ~foo()[ the destructor of my_foo is invoked]
   val.i= Garbage value [my_foo has been destroyed, causing val to reference an invalid object]*/
   
 

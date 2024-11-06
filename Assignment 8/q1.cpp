#include<iostream>
#include <vector>
#include <list>
using namespace std;

class base {
    int x;
    vector<double> v;
public:
    base(int y, vector<double> z): x {y}, v {z} {}
    void base_print(){
    std::cout << "x = " << x << std::endl;
    std::cout << "v = " << std::endl;
    for (auto e : v)
    std::cout << e << " ";
    std::cout << "\n";
    }
};

class derived : public base {
    list<bool> l;
public:
    derived(int y, vector<double> z);
    derived(int y, vector<double> z, list<bool> el);

    void print();
};

derived::derived(int y, vector<double> z) : base {y,z}{
    l = list<bool>(); // empty bool list
}
derived::derived(int y, vector<double> z, list<bool> el) : base {y,z}{
    l = list<bool>(el);
} 
void derived::print(){
    base_print(); // call the inherited base class members
    std::cout << "list = \n";
    for(auto x : l)
    std::cout << x << " "; 
    std::cout << "\n"; 
}

int main(){
        derived d {10, {1.5,2.5,3.5}, {true,false}};
        d.print();
}

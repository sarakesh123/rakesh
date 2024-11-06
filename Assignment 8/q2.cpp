#include <iostream>

class Base {
public:
    virtual void iam() { std::cout << "I am base \n"; } // Declare as virtual
};

class D1 : public Base {
public:
    void iam() { std::cout << "I am D1 \n"; }
};

class D2 : public Base {
public:
    void iam() { std::cout << "I am D2 \n"; }
};

void print(Base* bptr) {
    bptr->iam(); // automatic function binding based on type of object at bptr
}

int main() {
    Base b;
    D1 d1;
    D2 d2;
    print(&b);
    print(&d1);
    print(&d2);
}

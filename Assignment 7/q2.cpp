#include <iostream>
#include <stdexcept>

class Tiny {
    char v;
    void assign(int i) {
        if (i & ~077) throw Bad_range();
        v = i;
    }

public:
    class Bad_range : public std::exception {
        public:
            const char* what() const throw() {
                return "Tiny value out of range";
            }
    };

    Tiny(int i) {
        assign(i);
    }

    Tiny(const Tiny& other) {
        v = other.v;
    }

    Tiny& operator=(const Tiny& other) {
        v = other.v;
        return *this;
    }

    operator int() const {
        return v;
    }

    Tiny operator+(int i) const {
        return Tiny(v + i);
    }

    Tiny operator+(const Tiny& other) const {
        return Tiny(v + other.v);
    }

    Tiny operator-(int i) const {
        return Tiny(v - i);
    }

    Tiny operator-(const Tiny& other) const {
        return Tiny(v - other.v);
    }
};

int main() {
    try {
        Tiny c1 = 2;
        Tiny c2 = 62;
        Tiny c3 = c2 - c1;
        Tiny c4 = c3;

        int i = c1 + c2;
        c1 = c1 + c2;  // throws Bad_range
        i = c3 - 64;  // no range error
        c2 = c3 - 64;
        c3=c4;// throws Bad_range
    } catch (const Tiny::Bad_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

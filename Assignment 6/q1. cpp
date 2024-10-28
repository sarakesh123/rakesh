#include <iostream>

class myvector {
    int *p; // base pointer of the vector
    unsigned int size; // size of the vector
    bool shallow; // flag indicating whether this is a shallow copy

public:
    // Default constructor - creates an empty vector
    myvector() : p(nullptr), size(0), shallow(false) {}

    // Constructor - creates a vector of length n initialized to 0
    myvector(unsigned int n) : size(n), shallow(false) {
        p = new int[size];
        for (unsigned int i = 0; i < size; i++) {
            p[i] = 0;
        }
    }

    // Copy constructor - performs shallow or deep copy based on 'shallow' flag
    myvector(myvector& v, bool shallow = true) : size(v.size), shallow(shallow) {
        if (shallow) {
            // Shallow copy: just copy the pointer
            p = v.p;
        } else {
            // Deep copy: allocate new memory and copy contents
            p = new int[size];
            for (unsigned int i = 0; i < size; i++) {
                p[i] = v.p[i];
            }
        }
    }

    // Destructor - handles memory cleanup based on shallow flag
    ~myvector() {
        if (!shallow && p != nullptr) {
            delete[] p;
        }
    }

    // Returns the base pointer to the vector
    int* get_ptr() const {
        return p;
    }

    // Returns the size of the vector
    constexpr unsigned int get_size() const {
        return size;
    }

    // Returns the shallow flag
    bool is_shallow() const {
        return shallow;
    }

    // Updates the element at index i with val
    void update(unsigned int i, int val) {
        if (i < size) {
            p[i] = val;
        }
    }

    // Returns the element at index i
    constexpr int get(unsigned int i) const {
        return (i < size) ? p[i] : 0;
    }

    // Prints the vector contents to the console
    void print() const {
        for (unsigned int i = 0; i < size; i++) {
            std::cout << p[i] << " ";
        }
        std::cout << std::endl;
    }

    // Expands the vector and inserts a new value at the end
    void push_back(int val) {
        int *new_p = new int[size + 1];
        for (unsigned int i = 0; i < size; i++) {
            new_p[i] = p[i];
        }
        new_p[size] = val;

        if (!shallow) {
            delete[] p;
        }

        p = new_p;
        size++;
        shallow = false; // Ensure expansion results in a deep copy
    }
};

int main() {
    myvector x(7); // create a vector of size 7 initialized all to 0
    for (unsigned int i = 0; i < 7; i++) {
        x.update(i, 10 + 5 * i);
    }

    myvector v{x}; // shallow copy
    v.update(1, 100);
    v.print(); // print v contents
    x.print(); // print x contents and verify it has also changed

    myvector y{x, false}; // deep copy
    y.update(1, 200);
    y.print(); // print y contents
    x.print(); // print x contents and verify it has NOT changed

    y.push_back(500); // push_back 500 on y
    y.print(); // print y contents

    return 0;
}

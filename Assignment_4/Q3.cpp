#include <iostream>

/*This function returns a pointer to the string literal "Practice makes a man perfect".
String literals in C++ are stored in read-only memory (typically in the program's data segment),
and their lifetime lasts for the entire duration of the program.
This means returning a pointer to the string literal is safe, and no issues will occur.*/

const char* createString() {
    return "Practice makes a man perfect";
}

/*This function creates a local variable x with a value of 100 and returns the address of x.
The variable x is a local (automatic storage duration) variable, which means its memory is only valid inside the function.

Once the function returns, x goes out of scope, and its memory becomes invalid or garbage.

Undefined Behavior: Since createInt() returns the address of a local variable,
dereferencing the pointer (*ip) in main() can lead to undefined behavior,

because the memory location that ip points to is no longer valid after createInt() returns.

The output for *ip can be unpredictable. It might print garbage data or cause a crash depending on the system and compiler*/

int* createInt() {

    // This statement is replaced with the follwoing to resolve issues.
    // int x = 100;

    // Memory is allocated dynamically to avoid errors.
    int *x = new int(100);
    return x;
}



int main() {

    const char *str = createString();
    std::cout << "string = " << str << std::endl;
    int *ip = createInt();
    std::cout << "integer = " << *ip << std::endl;

    delete ip; // free dynamically allocated memory
}




#include <iostream>

int main() {
    // str1 points to a string literal and is a constant character string
    const char *str1 = "We love C++ programming\n";

    // str2 is an array of 100 characters
    char str2[100];

    // p is a pointer to the first element of str2
    char *p = str2;

    /* This loop copies the characters from str1 to str2 one by one.
       Post-increment (p++ and str1++) means the assignment happens first,
       and then both p and str1 are incremented to point to the next character
       in their respective arrays. The while loop continues until the null terminator
       '\0' from str1 is copied into str2, at which point the loop condition becomes false
       (since *p and *str1 both point to '\0'). The null character is also copied,
       ensuring that str2 becomes a null-terminated string. */

    while ((*p++ = *str1++)) {}

    // Output the string stored in str2
    std::cout << str2;

    return 0;
}

#include <iostream>
#include <fstream>
#include <bitset>

void printBitSequenceFromFile(std::string filename)
{
    std::fstream fhand(filename, fhand.binary | fhand.in);
    // One char is exactly one byte
    char c;
    while (fhand.read(reinterpret_cast<char*>(&c), sizeof(c)))
    {
        if (!fhand.eof())
        {
            std::cout << std::bitset<8>(c) << " ";
        }
    }
    std::cout << std::endl;
    fhand.close();
}

int main()
{
    std::string filename = "data.bin";
    signed int a = -10000;
    unsigned short b = 100;
    const char c[] = "WE";
    const size_t str_size = sizeof(c);

    std::cout << "Encoding values:" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::fstream fhand;
    // trunc will clear the file
    fhand.open(filename, fhand.binary | fhand.trunc | fhand.out);

    fhand.write(reinterpret_cast<char*>(&a), sizeof(a));
    fhand.write(reinterpret_cast<char*>(&b), sizeof(b));
    fhand.write(c, str_size);

    fhand.close();

    std::cout << "Bit sequence in the file: " << std::endl;
    printBitSequenceFromFile(filename);

    signed int d;
    unsigned short e;
    char f[str_size];

    fhand.open(filename, fhand.binary | fhand.in);

    fhand.read(reinterpret_cast<char*>(&d), sizeof(d));
    fhand.read(reinterpret_cast<char*>(&e), sizeof(e));
    fhand.read(f, str_size);
    std::cout << "Decoded values:" << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;

    fhand.close();
}

/*
 Printing the raw binary representation of the file contents. 
 The program reads the binary data back and displays the values of d, e, and f, which should match the original values of a, b, and c. 
  Each byte in the file is shown in binary.  
*/

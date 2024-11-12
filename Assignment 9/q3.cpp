#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* filename = "input.txt";
    ifstream file(filename, ios::binary);

    if (!file) {
        cerr << "Error: Could not open file " << filename << endl;
        return 1;
    }

    unsigned long long total = 0;
    char byte;

    while (file.read(&byte, sizeof(byte))) {
        total += static_cast<unsigned char>(byte);
    }

    if (file.gcount() > 0) {
        total += static_cast<unsigned char>(byte);
    }
    cout << "Total sum of characters (bytes): " << total << endl;
    file.close();

    return 0;
}


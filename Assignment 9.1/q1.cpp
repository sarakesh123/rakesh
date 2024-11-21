#include<iostream>
#include<fstream>
using namespace std;

class fileRA {
    fstream file;
public:
    fileRA(const string& filename) : file(filename) {
        file.open(filename, ios::in | ios::out | ios::binary);
        if (!file) {
            cout<<"Failed to open file."<<endl;
        }
    }
    unsigned int get_size() {
        file.clear(); 
        file.seekg(0, ios::end);
        return static_cast<unsigned int>(file.tellg());
    }
    
    class FileDescriptor {
        fileRA &fileRAObj;
        streampos pos;
    public:
        FileDescriptor(fileRA &obj, streampos p) : fileRAObj(obj), pos(p) {}
        FileDescriptor &operator=(char ch) {
            fileRAObj.file.seekp(pos);
            fileRAObj.file.put(ch);
            return *this;
        }
        operator char() const {
            fileRAObj.file.seekg(pos);
            return fileRAObj.file.get();
        }
    };
    
    FileDescriptor operator[](std::streampos pos) {
        if (pos >= get_size()) {
            cout<<"Position is out of range"<<endl;
        }
        return FileDescriptor(*this, pos);
    }
};

int main() {
        fileRA fobj("input.txt");
        fobj[4] = 'A';
        for (unsigned int i = 0; i < fobj.get_size(); i++) {
            std::cout << fobj[i];
        }
        char c = fobj[1];
        std::cout << "\nChar is = " << c << std::endl;
       
    return 0;
}

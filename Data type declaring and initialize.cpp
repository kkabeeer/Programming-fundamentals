#include <iostream>
using namespace std;
int main() {
    // Integer types
    int myInt = 100;
    short int myShortInt = 32767;
    long int myLongInt = 1234567890;
    long long int myLongLongInt = 9223372036854775807;

    // Floating-point types
    float myFloat = 3.14f;
    double myDouble = 2.718281828;

    // Character and boolean types
    char myChar = 'A';
    bool myBool = true;

    // Byte type
    unsigned char myByte = 255;

    // Printing all variables in a single line
    cout << "int: " << myInt << ", "
         << "short int: " << myShortInt << ", "
         << "long int: " << myLongInt << ", "
         << "long long int: " << myLongLongInt << ", "
         << "float: " << myFloat << ", "
         << "double: " << myDouble << ", "
         << "char: " << myChar << ", "
         << "bool: " << (myBool ? "true" : "false") << ", "
         << "unsigned char (as int): " << static_cast<int>(myByte) 
         << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float floatValue;
    cout << "Enter a float value: ";
    cin >> floatValue;
    
    char character;
    cout<<"Enter the Character:";
    cin>> character;
    int offset = 8;
    
    int intValue = static_cast<int>(floatValue);
    cout << "After converting to int: " << intValue << endl;
    ; 
    char resultCharacter = character + offset;
    cout << "Character '" << character << "' + " << offset << " = " << resultCharacter;

    return 0;
}

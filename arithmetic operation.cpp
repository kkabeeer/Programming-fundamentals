#include <iostream>
using namespace std;

int main() {
    int first, second;
    float forst, socond, result;

    cout << "Enter the First Integer: ";
    cin >> first;
    cout << "Enter the Second Integer: ";
    cin >> second;
    cout << "Enter the first Float: ";
    cin >> forst;
    cout << "Enter the second Float: ";
    cin >> socond;

    result = first + second;
    cout << "The Addition of Two Integers: " << result << endl;

    result = forst + socond;
    cout << "The Addition of Two Floats: " << result << endl;

    result = first - second;
    cout << "The Subtraction of Two Integers: " << result << endl;

    result = forst - socond;
    cout << "The Subtraction of Two Floats: " << result << endl;

    result = first * second;
    cout << "The Multiplication of Two Integers: " << result << endl;

    result = forst * socond;
    cout << "The Multiplication of Two Floats: " << result << endl;

    if (second != 0) {
        result = static_cast<float>(first) / second;
        cout << "The Division of Two Integers: " << result << endl;
    } else {
        cout << "Division by zero error for integers." << endl;
    }

    if (socond != 0) {
        result = forst / socond;
        cout << "The Division of Two Floats: " << result << endl;
    } else {
        cout << "Division by zero error for floats." << endl;
    }

    return 0;
}
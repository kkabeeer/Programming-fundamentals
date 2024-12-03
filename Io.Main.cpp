#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Escape Sequences:\n"
         << "Newline (\\n): kabeeer.\n"
         << "Tab (\\t):\theyhey.\n\n";

    double num1 = 12.221, num2 = 32.442;

    cout << fixed << setprecision(2);
    cout << "I/O Manipulation:\n"
         << "Number 1: " << num1 << "\n"
         << "Number 2: " << num2 << "\n\n";

    cout << setw(10) << "Value 1" << setw(15) << "Value 2\n"
         << setw(10) << num1 << setw(15) << num2 << "\n";

    return 0;
}

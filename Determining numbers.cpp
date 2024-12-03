#include <iostream>
using namespace std;
int main() {
    double number;

   cout << "Please enter a number: ";
   cin >> number;

    if (number > 0) {
        cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        cout << "The number is negative." << std::endl;
    } else {
        :cout << "The number is zero." << std::endl;
    }

    return 0;
}

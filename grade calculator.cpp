#include <iostream>
using namespace std;
int main() {
    int marks;

    do {
        cout << "Enter marks (0-100, -1 to stop): ";
        cin >> marks;

        if (marks == -1) break;

        if (marks >= 90)
            cout << "Grade: A\n";
        else if (marks >= 80)
            cout << "Grade: B\n";
        else if (marks >= 70)
            cout << "Grade: C\n";
        else if (marks >= 60)
            cout << "Grade: D\n";
        else
            cout << "Grade: F\n";

    } while (marks != -1);

    return 0;
}

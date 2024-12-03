#include <iostream>
int main()
{
    int num = -4;
    if (num > 0) {
        std::cout << "This is a positive number" << std::endl;
    } else if (num < 0) {
        std::cout << "This is a negative number" << std::endl;
    } else {
        std::cout << "This is zero" << std::endl;
    }

    return 0;
}

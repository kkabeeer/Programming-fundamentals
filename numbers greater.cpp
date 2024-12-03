#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num); 
    
    if (num < 100) {
        printf("This is under 100\n");
    }
    if (num > 100) {
        printf("This is above 100\n");
    }

    return 0;
}

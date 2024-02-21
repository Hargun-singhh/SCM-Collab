#include <stdio.h>
int main() {
    int number;
    printf("Enter an Number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0:
            printf("%d EVEN\n", number);
            break;
        case 1:
        case -1:
            printf("%d ODD\n", number);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}ksejfj

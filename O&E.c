#include <stdio.h>
int main() {
    int number;
    printf("Kashvi is here!");
    printf("Enter an Number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0:
            printf("%d is an even number.\n", number);
            break;
        case 1:
        case -1:
            printf("%d is an odd number.\n", number);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
#include <stdio.h>
int main() {
    int number;
    int number;
    printf("Kashvi is here!");
 
    int num;

 
    printf("Enter an Number: ");
    scanf("%d", &num);

    switch (number % 2) {
        case 0:
            printf("%d EVEN\n", num);
            break;
        case 1:
        case -1:
            printf("%d ODD\n", num);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
} 
#include <stdio.h>
int main() {
<<<<<<< HEAD
    int number;
=======
    int num;

>>>>>>> 50c676df039e6647cd799ea282b26d9e9b4883cb
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
}ksejfj   

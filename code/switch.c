#include <stdio.h>

int main() {
    printf("Switch example\n");

    int i, a, b;

    printf("\n 1. Add");
    printf("\n 2. Subtract");
    printf("\n 3. Multiply");
    printf("\n 4. Divide");
    printf("\n 0. Exit\n");

    printf("Please enter your choice\n");
    scanf("%d", &i);
    printf("You selected %d\n", i);
    printf("Please enter your first number\n");
    scanf("%d", &a);
    printf("Please enter your second number\n");
    scanf("%d", &b);

    switch(i) {
        case 1:
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case 4:
            printf("%d / %d = %d\n", a, b, a/b);
            break;
        case 0:
            printf("Exiting!\n");
            break;
        default:
            printf("Enter a valid choice please!\n");
            break;
    }

    printf("Bye!\n");
    return 0;
}
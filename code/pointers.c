// Pointers

#include <stdio.h>

int main() {
    printf("Pointers\n");
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];

    return 0;
}
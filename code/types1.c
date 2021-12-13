#include <stdio.h>
#include <limits.h>

int main() {
    printf("From limits.h:\n");
    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("CHAR_MAX: %d\n", CHAR_MAX);

    // signed types
    printf("signed char min=%d\n",-(char)((unsigned char) ~0 >> 1));

    // unsigned types
    printf("unsigned char max=%u\n",((unsigned char) ~0 >> 1));
}
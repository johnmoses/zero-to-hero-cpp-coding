#include <stdio.h>

int main() {
    printf("Celcious-fahrenheight conversion table");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius / (5.0 / 9.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        fahr = fahr + step;
        celsius += step;
    }
}
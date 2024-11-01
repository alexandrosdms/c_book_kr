#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;       // lower limit
    upper = 300;    // upper limit
    step = 20;

    celsius = lower;
    printf("Celsius \t Fahreneit\n");
    while (celsius <= upper) {
        fahr = 9.0/5.0 * celsius + 32.0;
        printf("%9.0f %13.1f\n", celsius, fahr);
        celsius += step;
    }
}
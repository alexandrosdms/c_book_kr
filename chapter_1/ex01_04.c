#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;       // lower limit
    upper = 300;    // upper limit
    step = 20;

    fahr = lower;
    printf("Fahreneit\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5.0/9.0 * (fahr - 32.0);
        printf("%9.0f %13.1f\n", fahr, celsius);
        fahr += step;
    }
}

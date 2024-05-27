#include <stdio.h>

main () {
    int min, max, step;
    min = 0;
    max = 20;
    step = 5;
    while (min <= max) {
        printf("%i, %i\n", min, max);
        min += step;
    }
}
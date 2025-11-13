#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;
    float srednia;

    srednia = (a + b + c) / 3.0f;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("Srednia arytmetyczna: %.2f\n", srednia);

    return 0;
}

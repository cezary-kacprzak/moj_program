#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("Dodawanie: %d + %d = %d\n", a, b, a + b);
    printf("Odejmowanie: %d - %d = %d\n", a, b, a - b);
    printf("Mnozenie: %d * %d = %d\n", a, b, a * b);
    printf("Dzielenie: %d / %d = %d\n", a, b, a / b);

    return 0;
}

#include <stdio.h>

int main(void) {
    int a = 7;
    int b = 12;

    printf("a = %d, b = %d\n", a, b);

    if (a > b) {
        printf("a jest wieksze od b.\n");
    } else if (a < b) {
        printf("b jest wieksze od a.\n");
    } else {
        printf("a i b sa rowne.\n");
    }

    return 0;
}

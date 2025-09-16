#include <stdio.h>

void modify(int *x, float *y) {
    *x += 5;      // add 5 to integer
    *y *= 2;      // double the float
}

int main() {
    int a = 10;
    float b = 3.5;

    printf("Before modification: a = %d, b = %.2f\n", a, b);
    modify(&a, &b);
    printf("After modification: a = %d, b = %.2f\n", a, b);

    return 0;
}

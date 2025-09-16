#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Integer value: %d, Pointer value: %d\n", a, *p1);
    printf("Float value: %.2f, Pointer value: %.2f\n", b, *p2);
    printf("Char value: %c, Pointer value: %c\n", c, *p3);

    return 0;
}

#include <stdio.h>

int main() {
    int a = 10, *p1 = &a;
    float b = 3.5, *p2 = &b;
    char c = 'X', *p3 = &c;

    printf("Original addresses:\n");
    printf("int pointer: %p\nfloat pointer: %p\nchar pointer: %p\n", p1, p2, p3);

    p1++; p2++; p3++;
    printf("\nAfter increment:\n");
    printf("int pointer: %p\nfloat pointer: %p\nchar pointer: %p\n", p1, p2, p3);

    p1--; p2--; p3--;
    printf("\nAfter decrement (back to original):\n");
    printf("int pointer: %p\nfloat pointer: %p\nchar pointer: %p\n", p1, p2, p3);

    return 0;
}

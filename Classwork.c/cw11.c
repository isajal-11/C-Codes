#include <stdio.h>

int main() {
    int a, b, i, result;

    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result = i * i;           // square for even
            printf("%d ", result);
        } else {
            result = i * i * i;       // cube for odd
            printf("%d ", result);
        }
    }

    return 0;
}
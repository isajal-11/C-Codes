#include <stdio.h>

int main() {
    int a, b, i, final;

    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            final = i * i;           
            printf("%d ", final);
        } else {
            final = i * i * i;       
            printf("%d ", final);
        }
    }

    return 0;
}
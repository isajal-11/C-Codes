//multiplication without multiplication operator
#include <stdio.h>
int main() {
    int a, b, result = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) {
        result = result+a;
    }
    printf("Multiplication result: %d\n", result);
    return 0;
}



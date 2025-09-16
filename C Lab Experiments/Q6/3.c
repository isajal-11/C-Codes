#include <stdio.h>

int FIBO(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return FIBO(n - 1) + FIBO(n - 2);
}

int main() {
    int num, i;
    printf("Enter number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d terms:\n", num);
    for (i = 0; i < num; i++)
        printf("%d ", FIBO(i));
    
    printf("\n");
    return 0;
}

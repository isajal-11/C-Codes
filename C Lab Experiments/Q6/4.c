#include <stdio.h>

int ISPRIME(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++)
        if (ISPRIME(i))
            printf("%d ", i);
    
    printf("\n");
    return 0;
}

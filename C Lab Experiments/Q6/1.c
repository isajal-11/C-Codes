#include <stdio.h>

long fact(int n) {
    if (n == 0) return 1;
    else return n * fact(n - 1);
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    long c = fact(n) / (fact(r) * fact(n - r));
    printf("C(%d, %d) = %ld\n", n, r, c);

    return 0;
}

//Reverse order printing from N to 1
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse order: ");
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

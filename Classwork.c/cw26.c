#include <stdio.h>
int main() {
    int arr[10];
    int i, j, k;
    int maxSum, num1, num2, num3;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    maxSum = arr[0] + arr[1] + arr[2];
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            for (k = j + 1; k < 10; k++) {
                int sum = arr[i] + arr[j] + arr[k];

                if (sum > maxSum) {
                    maxSum = sum;
                    num1 = arr[i];
                    num2 = arr[j];
                    num3 = arr[k];
                }
            }
        }
    }
    printf("Maximum sum is: %d\n", maxSum);

    return 0;
}

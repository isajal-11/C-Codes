//Find the pair of elements in an array whose sum is closest to zero
#include <stdio.h>

int main() {
    int i, j, n, num1, num2, sum, minSum = 1000000;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            sum = arr[i] + arr[j];

            if(sum < 0 && -sum < minSum) {
                minSum = -sum;
                num1 = arr[i];
                num2 = arr[j];
            }
            else if(sum >= 0 && sum < minSum) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("The pair whose sum is closest to 0 is (%d, %d)\n", num1, num2);

    return 0;
}

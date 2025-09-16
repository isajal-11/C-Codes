//Find the maximum and minimum values in an array 
#include <stdio.h>
int main() {
    int a[5], i;
    int max, min;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++) {
        scanf("%d", &a[i]);
    }
    for(i=1; i<5; i++) {
        if(a[i]>max) {
            max = a[i];
        }
        if(a[i]<min) {
            min = a[i];
        }
    }

    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);

    return 0;
}

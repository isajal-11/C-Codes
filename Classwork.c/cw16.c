
#include <stdio.h>
int main() {
    int a[6], i, j, duplicatecount;

    printf("Enter 6 numbers:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    printf("Unique elements are:\n");
    for(i = 0; i < 6; i++) {
        duplicatecount = 0;
        for(j=0; j< 6; j++) {
         if(a[i] == a[j] && i != j) {
         duplicatecount = 1; 
            }
        }
        if(duplicatecount == 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}



//Write a program to read n number of value in an array and display them in reverse order
#include<stdio.h>
int main() {
    int i, n;

    printf("Enter number : ");
    scanf("%d",&n);
    
    int arr[n]; 

    for(i=0; i<n; i++) {
        scanf("%d", & i);
    }
    printf("Numbers in reverse order:\n");
    for(i=n-1; i>=0; i--) {
        printf("%d ",i);
    }

    return 0;
}

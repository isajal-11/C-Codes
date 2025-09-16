// Write a program to accept 8 numbers of a user find the sum of all elements in the array
#include <stdio.h>
int main() {
    int array[8]; 
    int i;
    int sum = 0;

    printf("Enter anyy 8 numbers:");
    for(i = 0; i < 8; i++) {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 8; i++) {
        sum = sum + array[i];
    }
    
    printf("Sum of entered numbers is = %d", sum);

    return 0;
}

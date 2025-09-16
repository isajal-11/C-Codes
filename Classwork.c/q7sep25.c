//palindrome
#include <stdio.h>
int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++);
    int len = i - 1;

  
    for(i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            printf("The string is not a palindrome.\n");
            return 0;  
        }
    }
    printf("The string is a palindrome.\n");
    return 0;
}


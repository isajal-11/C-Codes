//wap in c to read a sentence and replace  lowercase characters with uppercase and vice versa
#include<stdio.h>
int main() {
    char s[100];
    int i;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }

    printf("New sentence is: %s", s);

    return 0;
}

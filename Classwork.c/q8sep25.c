#include <stdio.h>

char str[100];

int countCharacters() {
    int i = 0;
    int alphabets = 0, digits = 0, special = 0;

    while(str[i] != '\0') {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } 
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        else if(str[i] != '\n') { 
            special++;
        }
        i++;
        return 0;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
}

int main() {
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacters();  

    return 0;
}


//q1 using functions
#include <stdio.h>

char str[100];
int countWords() {
    int i = 0, words = 1;

    while(str[i] != '\0') {
        if(str[i] == ' ' || str[i] == '\n') {
            words++;
        }
        i++;
    }
    return words;
}

int main() {
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int totalWords = countWords();
    printf("Total number of words: %d\n", totalWords);

    return 0;
}

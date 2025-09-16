//wap to find the longest word in a sentence
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, wordlentgh = 0, maxlength= 0, maxstart= 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            wordlentgh++;  
        } else {
            if (wordlentgh> maxlength) {
                maxlength = wordlentgh;
                maxstart = start; 
            }
            wordlentgh= 0;   
            start = i + 1;        
        }
        i++;
    }
    if (wordlentgh > maxlength) {
        maxlength= wordlentgh;
        maxstart= start;
    }
    printf("Longest word: ");
    for (i = maxstart; i < maxstart + maxlength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

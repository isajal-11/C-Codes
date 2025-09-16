//wap to count the number of spaces in a file
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int spaceCount = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error! File not found or cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ') {
            spaceCount++;
        }
    }

    printf("\nTotal number of spaces in the file: %d\n", spaceCount);

    fclose(fp);
    return 0;
}

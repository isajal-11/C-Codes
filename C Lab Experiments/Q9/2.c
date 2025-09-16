#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("newfile.txt", "r");  // open existing file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}

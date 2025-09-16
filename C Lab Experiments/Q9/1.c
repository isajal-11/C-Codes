#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("newfile.txt", "w");  // create or overwrite file
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter text to write into the file: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("Text written to file successfully.\n");
    return 0;
}

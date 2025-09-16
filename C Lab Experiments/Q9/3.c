#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("newfile.txt", "r");  // open existing file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File contents:\n");
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}

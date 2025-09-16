//wap to display the contents of a file line by line
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200]; 

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error! File not found or cannot be opened.\n");
        return 1;
    }

    printf("\n--- File Contents (Line by Line) ---\n\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    printf("\n--- End of File ---\n");

    fclose(fp);
    return 0;
}

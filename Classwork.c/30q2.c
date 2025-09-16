//wap to read the contents of a file and display them in proper format
#include<stdio.h>
int main() {

    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the file name: ");
    scanf("%s", filename); 

    file = fopen(filename, "r"); 
    if (file == NULL) {
        printf("Error! This file is not found or cannot be opened.\n");
        return 1;
    }

    printf("\n--- File Contents ---\n\n");

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);  //EOF->END OF FILE
    }

    printf("\n\n--- End of File ---\n");
    fclose(file);
    return 0;
}

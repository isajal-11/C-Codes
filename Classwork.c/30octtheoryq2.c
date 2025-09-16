//wap to copy the contents of one file into another file
#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char line[200];  

    f1 = fopen("source.txt", "r");   
    f2 = fopen("copy.txt", "w");     

    if (f1 == NULL || f2 == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while (fgets(line, sizeof(line), f1)) 
    {
        fputs(line, f2);                   
    }

    printf("File copied successfully!");

    fclose(f1);
    fclose(f2); /*adding first two numbers*/

    return 0;
}

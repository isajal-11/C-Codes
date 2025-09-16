//wap to count number of characters and number of words in a file
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0;
    
    fp = fopen("file.txt", "r"); 

    if (fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            words++;
    }

    words++; 

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);

    fclose(fp);
    return 0;
}

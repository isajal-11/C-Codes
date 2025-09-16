//Wap to count how many times program is executed and display the message at the beginning of the program
#include <stdio.h>

int main()
{
    FILE *fp;
    int count = 0;

    fp = fopen("count.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &count);
        fclose(fp);
    }
    count++;
    printf("THIS IS EXECUTION NUMBER %d\n", count);

    fp = fopen("count.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "%d", count);
    fclose(fp);

    return 0;
}

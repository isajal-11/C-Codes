#include <stdio.h>

int main() {
    int x = 10;  
    printf("Inside main(): x = %d\n", x);

    {
        int y = 20;  
        printf("Inside inner block:\n");
        printf("x = %d\n", x);  
        printf("y = %d\n", y);  
    }

    {
        int z = 30;
        printf("Inside another block:\n");
        printf("x = %d\n", x);
        printf("z = %d\n", z);
    }


    return 0;
}

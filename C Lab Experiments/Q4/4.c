#include <stdio.h>

void counterFunction() {
    static int count = 0;  
    count++;
    printf("count = %d\n", count);
}

int main() {
    printf("First call:\n");
    counterFunction();

    printf("Second call:\n");
    counterFunction();

    printf("Third call:\n");
    counterFunction();

    return 0;
}

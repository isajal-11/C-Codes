#include <stdio.h>
int count = 10;

void display() {
    printf("Inside display(): count = %d\n", count);
}

void modify() {
    count += 5;
    printf("Inside modify(): count = %d\n", count);
}

int main() {
    printf("Inside main(): count = %d\n", count);
    display();
    modify();
    printf("Back in main(): count = %d\n", count);
    return 0;
}

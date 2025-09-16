#include <stdio.h>

int sajalmarks = 90; 

void showmarks() {
    int Kushmarks = 30;
    printf("Inside function:\n");
    printf("Kush Marks (local variable) = %d\n", Kushmarks);
    printf("Sajal's Marks (global variable) = %d\n", sajalmarks);
}

int main() {
    showmarks();

    printf("\nOutside function:\n");
    printf("Sajal's Marks (global variable) = %d\n", sajalmarks); 
   
    
    return 0;
}
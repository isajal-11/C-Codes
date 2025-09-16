//here, this function takes any items price and will add 18% gst to it
#include<stdio.h>
void printPrice(float n); //function declare
int main(){
    float n=100;
    printPrice (n); //function call
    printf("Value is %f",n);
}


void printPrice(float n){ //function define
    n=n+(0.18*n); 
    printf("Final price is %f", n);
}
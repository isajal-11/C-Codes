//wap to enter  prices of 3 items and print their final price with gst

#include<stdio.h>
int main(){

    int price[3];
    printf("Enter price");
    scanf("%d", price[0]);
    scanf("%d", price[1]);
    scanf("%d", price[2]);

printf("total price       %d  :", price[0]+(0.18*price[0]));

return 0;
}
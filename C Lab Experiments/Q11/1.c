#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers \n");
    scanf("%d %d",&num1,&num2);
    printf("num1 & num2=%d",num1&num2);
    printf("num1|num2=%d",num1|num2);
    printf("~num1=%d \n",~num1);
    return 0;
}
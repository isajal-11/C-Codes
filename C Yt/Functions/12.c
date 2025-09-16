//Program to find maximum and minimum between two numbers using functions
#include<stdio.h>
int maxnum(int num1, int num2);
int mininum(int num1,int num2);

int main(){

    int num1,num2,maximum,minimum;
    printf("Enter two numbers:");
    scanf("%d %d",&num1, &num2);

    maximum=maxnum(num1,num2);
    minimum=mininum(num1,num2);

printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
  
    return 0;
}

int max(int num1, int num2){

return (num1>num2) ? num1:num2;
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
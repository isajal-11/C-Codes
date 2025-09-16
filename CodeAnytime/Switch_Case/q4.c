//Write a C program to create Simple Calculator using switch case.
#include<stdio.h>
int main(){
int  n,n2,newnum;
int INT=10;
printf("%d",INT);

printf(" Enter number 1: ");
scanf("%d",&n);

printf(" Enter number 2 ");
scanf("%d",&n2);

char operators;
printf("Enter the operation you wish to perform (+,-,*,/):");
scanf(" %c",&operators);

switch(operators){
    case '+': newnum=n+n2;             //n+n2=newnum
    printf("%d",newnum);
    break;

    case '-': newnum=n-n2;   
    printf("%d",newnum);
    break;


    case '*': newnum=n*n2;   
    printf("%d",newnum);
    break;

    case '/': newnum=n/n2;   
    printf("%d",newnum);
    break;

}

return 0;










}
//Wap using switch case for performing operations on the following conditions
//if operator +, print addition of integers
//if op *, print multiplication and so on 
#include<stdio.h>
int main(){
    int n1,n2,newnum;
    printf("Enter number 1:");
    scanf("%d",&n1);
    printf("Enter number 2:");
    scanf("%d",&n2);

char operators;
printf("Enter the operators(+,-,*,/)");
scanf("%c",&operators);

char value;
if(operators=='+')
value='+';
else if (operators=='*')
value='*';
else if(operators=='-')
value='-';
else if(operators=='/')
value='/';
else 
printf("Invalid operator");

    switch(value){
        case '+' : newnum=n1+n2;
        printf("New number is %d",newnum);
        break;
        case '*': newnum=n1*n2;
        printf("New number is %d",newnum);
        break;
        case '-' : newnum=n1-n2;
        printf("New number is %d",newnum);
        break;
        case '/': newnum=n1/n2;
        printf("New number is %d",newnum);
        break;
    }
    
return 0;

}

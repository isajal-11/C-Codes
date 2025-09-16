#include<stdio.h>
int main(){

int marks[3]; 

printf("Enter physics marks:");
scanf("%d",&marks[0]);

printf("Enter maths marks");
scanf("%d",&marks[1]);

printf("Enter maths marks");
scanf("%d",&marks[2]);


printf("physics=%d maths=%d chem=%d",marks[0],marks[1],marks[2]);

    return 0;
}
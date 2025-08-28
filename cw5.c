#include<stdio.h>
int main(){
int choice;
printf("enter choice(1-3):");
scanf("%d",&choice);
switch(choice){
    case 1:printf("a is the winner");
    break;

    case 2:printf("b is the winner");
    break;
    
    case 3:printf("c is the winner");
    break;
    default:printf("enter your choice from 1 - 3");
}
return 0;
}
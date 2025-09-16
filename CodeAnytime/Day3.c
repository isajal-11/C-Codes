#include<stdio.h>
 int main(){

int age,class; //didnt use an array here, why to store integer values and take up so much space, using it with a string is a feasible decision!!!
char name[100];
printf("Enter name: ");
fgets(name,sizeof(name),stdin);
printf("The name is %s",name);
printf("Enter age: ");
scanf("%d",&age);
printf("The age is: %d\n",age);
printf("Enter class: ");
scanf("%d",&class);
printf("The class is: %d\n",class);

    return 0;
 }
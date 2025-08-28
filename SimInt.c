#include <stdio.h>
int main() {
int Principle;
int Time;
int Rate=8;
printf("Enter Principle:"); 
scanf("%d",&Principle);
printf("Enter Time (in years):");
scanf("%d",&Time);
int SimpleInterest =Rate*Time*Principle/100 ;
printf("Simple interest is%d \n",SimpleInterest);
return 0;
}
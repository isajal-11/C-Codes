//Discount eligibility using switch case (agrima didi)
#include<stdio.h>
int main(){
    int bill,discount;
    printf("Enter total bill:");
    scanf("%d",&bill);
   int casevalue;

   if(bill>5000)
   casevalue=1;
   else if(bill>=2001 && bill<5000)
   casevalue=2;
   else if(bill<2000)
   casevalue=3;
   else
    printf("Not included in case");
   

    switch(casevalue){
    case 1: discount=bill*20/100;
    printf("You have a discount of %d",discount);
    break;
    case 2: discount=bill*10/100;
    printf("You have a discount of %d",discount);
    case 3: printf("You got no discount");
    break;
    }
   return 0;
}
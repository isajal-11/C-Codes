//Train ticket fair check
#include<stdio.h>
int main(){
    int discount,distance,age,ticketprice,casevalue;
    
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter the distance to be travelled");
    scanf("%d",&distance);

  ticketprice=distance*10;


    if(age>=60)
    casevalue=1;
    else if(age<12)
    casevalue=2;
    else
    casevalue=3;


    switch(casevalue){
        case 1: discount=30*ticketprice/100;
        printf("You have earned a discount of 30 percent: %d",discount);
        break;
        case 2: discount=ticketprice/2;
        printf("You have earned a discount of 50 percent:%d",discount);
        break;
        case 3:discount=0;
        printf("You have to pay the full fare %d", ticketprice);
        break;
    }

    return 0;
}
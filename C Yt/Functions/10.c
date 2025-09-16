//Write a program in C to check if a given number is even or odd using the function.

#include<stdio.h>
void checkEO(int a); //void checkeo(int a)?
int main(){
int a;
printf("Enter number:");
scanf("%d",&a);

     checkEO(a);

return 0;
}


void checkEO(int a){
    if(a%2==0){
    printf("Number is even");
    }
    else{
        printf("Number is odd");
    }

}
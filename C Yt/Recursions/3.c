//factorial of n
#include<stdio.h>
int factorial(int n);
int main(){
printf("Factorial is %d",factorial(4));
return 0;
}

int factorial(int n){
    if(n==1){ //base case
        return 1;
    }
    int factN1=factorial(n-1);
    int factN=factN1*n;
    return factN;
}
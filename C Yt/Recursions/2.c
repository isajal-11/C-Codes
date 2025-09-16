//sum of n natural numbers
#include<stdio.h>
int sum(int n);
int main(){
    printf("Sum is %d",sum(5));
return 0;
}


int sum(int n){
    if(n==1){
        return 1;
    }
     int sumNm1=sum(n-1); //sum of 1 to n
     int sumN= sumNm1+n;

}
//write a function to print the n terms of a fibonacci sequence
#include<stdio.h>
 int fib(int n);
int main(){
int n;
   fib(6);
  
    return 0;
}



int fib(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }
        else if (n==1){
            return 1;
        }
    }


    int fibNM1=fib(n-1);
    int fibNM2=fib(n-2);
    int fibN=fibNM1+fibNM2;

printf("thee fibonacci of %d is %d: \n",fibN);

return fibN;

}






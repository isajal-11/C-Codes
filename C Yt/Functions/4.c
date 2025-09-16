//function which helps us print the table of a number
#include<stdio.h>

void printtable(int n);
int main(){ //say n ko main function ke andar store karwaya, toh usse sirf main function hi pehchaan paaega

    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printtable(n); //argument or actual parameter
    return 0;
}

void printtable(int n){
    for(int i=1;i<=10;i++)
    printf("%d \n",i*n );
}
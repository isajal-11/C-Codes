//wap in c to count the total number of digits,alphabets,special characters  in a string
#include<stdio.h>
int main(){
    char string[100];
    int i,alphabets=0,digits=0,specialchar=0;
    printf("Enter the stiring");
    fgets(string,sizeof(string),stdin);

    for(i=0;string[i]!='\0';i++){
        if ((string[i]>='a' && string[i]<='z') ||  (string[i] >= 'A' && string[i] <= 'Z')){
            alphabets++;
        }
        else if(string[i] >= '0' && string[i] <= '9') {
            digits++;
        }
        else if(string[i] != '\n') {  
            specialchar++;
        }
    }
 printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialchar);

    return 0;
}
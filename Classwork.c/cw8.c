#include<stdio.h>
int main(){
    char ch;
    
   printf("Enter character:");
   scanf("%c",&ch);

   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
        printf("%c is vowel \n", ch);
    } else {
        printf("%c is a Consonant \n", ch);
    }
     
return 0;

}



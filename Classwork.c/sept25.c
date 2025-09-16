//wap in c to count the total number of words in a string
#include<stdio.h>
int main(){
char s[100];
int i,word=1;

printf("Enter a string:");
fgets(s,sizeof(s),stdin);

for(i=0;s[i]!=0;i++){
    if(s[i]==' '){   // || s[i]=='\n'
        word++;
    }
}
printf("Total number of words in the string are: %d",word);
return 0;

}
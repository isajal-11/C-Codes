//write a function that prints namaste if user is indian and bonjour if the user is french
#include<stdio.h>
void french();
void indian();
int main(){
    char nationality;
    printf("Enter Nationality (f for french) & (i for indian)");
   scanf("%c",&nationality);
   if(nationality =='i') {
      indian();
   }
   else{
    french();
   }
    return 0;
}

void french(){
    printf("Bonjour \n");
}
void indian(){
    printf("Namaste \n");
}
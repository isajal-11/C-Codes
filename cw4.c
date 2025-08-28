#include<stdio.h>
int main(){
int i,sum=0;
int count = 0;
for(i=10;i<=70;i++)
{
    if(count<=12)
    {
            if(i%2!=0)
         {
        count = count + 1;
        sum = sum + i;
        }
    }
  
}
  printf("%d\n", sum);
    return 0;
}
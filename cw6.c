#include<stdio.h>
int main(){
int a,b,c,d;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("enter c:");
scanf("%d",&c);
printf("enter d:");
scanf("%d",&d);

if(a>b && a>c && a>d)
{
    printf("%d is greatest\n", a);
}
else if(b>a && b>c && b>d)
{
    printf("%d is the greatest\n", b);
}
else if(c>a && c>b && c>d)
{
   printf("%d is the greatest\n", c);
}
else if(d>a && d>b && d>c)
{
    printf("%d is the greatest\n", d);
}
else{
    printf("enter a real number");
}
return 0;


}
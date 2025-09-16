#include <stdio.h>
    int main()
{
    int i,a1[6],a2[6];
    printf("Enter six numbers = ");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Copied array = ");
    for(i=0;i<=5;i++)
    {
        a2[i]=a1[i];
        printf("%d ",a2[i]);
    }
    
    return 0;
}
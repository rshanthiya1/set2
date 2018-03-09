#include <stdio.h>
int main()
{
    int x,s=0,i,a[56];
    printf("enter the value:");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    if(s>a[i])
    {
        s=a[i];
    }
    printf("\n the minimum value is:%d",s);
}





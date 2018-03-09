#include<stdio.h>
int main()
{
    int a[56],i,x,s=0;
    printf("enter the array:");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("the sum of value is:%d",s);
}

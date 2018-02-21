#include<stdio.h>
int main()
{
    int x,a[6],i,b=0;
    printf("enter the value");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    if(b<a[i])
    {
        b=a[i];
    }
    printf("the maximum valuemis:%d",b);
}

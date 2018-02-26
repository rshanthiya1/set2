#include<stdio.h>
int main()
{
    int a[56],i,n,b;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    for(i=0;i<n;i++)
    {
        if(b>a[i])
        b=a[i];
    }
    printf(" minimam value is:%d",b);
    for(i=0;i<n;i++)
    {
        if(b<a[i])
        b=a[i];
        
    }
    
}

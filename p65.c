#include<stdio.h>
int main()
{
    int n,i,a[56];
    printf("enter the n  number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<n)
        {
            printf("%d",a[i]);
        }
    }
}

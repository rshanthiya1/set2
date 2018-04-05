#include<stdio.h>
int main()
{
    int n,k,a[56],i;
    printf("enter the n and k value:");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d",a[i]);
    }
}

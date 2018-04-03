#include<stdio.h>
int main()
{
    int n,k,a[45],i;
    printf("enter the n and k value:");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k-1]);
    
}

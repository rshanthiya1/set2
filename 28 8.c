#include<stdio.h>
int main()
{
    int a[53],i,n;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("\n\t %d%d",a[i],i);
    }
    
}

#include<stdio.h>
int main()
{
    int n,a[56],b[59],i,j;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d",a[i]);
            }
        }
    }
}

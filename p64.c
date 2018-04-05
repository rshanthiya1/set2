#include<stdio.h>
int main()
{
    int n,k,i,a[56],j,t;
    printf("enter the n  number:");
    scanf("%d",&n);
    printf("enter the k number:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    if(a[i]<k)
    {
        printf("%d",a[i]);
    }
    }
}

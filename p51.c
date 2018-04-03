#include<stdio.h>
int main()
{
    int x,a[56],i,b,j,t;
    printf("enter the number:");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;

            }
        }
    }
    for(i=0;i<x;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n %d",a[1]);
}

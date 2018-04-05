#include<stdio.h>
int main()
{
    int n,i,a[56],k,c=0;
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
        if(a[i]==k)
        {
           c=c+1; 
        }
    }
    printf("%d",c);
}

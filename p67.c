#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("enter the n  number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}

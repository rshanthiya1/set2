#include<stdio.h>
int main()
{
    int n,k,i;
    printf("enter the n and k value:");
    scanf("%d%d",&n,&k);
    for(i=0;i<=n;i++)
    {
        if(i==k)
        {
            printf("%d",k);
        }
    }
}

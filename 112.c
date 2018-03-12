#include<stdio.h>
int main()
{
    int n,k,a[56],i,flag=0;
    printf("enter the n number:");
    scanf("%d",&n);
    printf("enter the k number:");
    scanf("%d",&k);
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        if(a[i]==k)
        {
            flag=1;
        }
    
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}

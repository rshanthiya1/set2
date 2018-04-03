#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
        flag=1;
        break;
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

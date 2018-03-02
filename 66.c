#include<stdio.h>
int main()
{
    int n,flag=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("yes prime");
    }
    else
    {
    printf("no");
    }
}




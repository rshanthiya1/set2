#include<stdio.h>
int main()
{
    int x,i,flag=0,s;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the number");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
       
     if(i==x)
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


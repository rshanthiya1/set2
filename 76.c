#include<stdio.h>
int main()
{
    int x,i=2,c=0;
    printf("enter the value:");
    scanf("%d",&x);
    while(i<x)
    {
        if(x%i==0)
        {
            c=c+1;
            
        }
        i++;
    }
    if(c==0)
    {
        printf("prime");
    }
    else
    {
    printf("composite:");
    }
}

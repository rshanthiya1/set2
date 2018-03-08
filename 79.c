#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\n %d",c);
    if(a==b)
    {
        printf("\n perfect square");
    }
    else
    {
        printf("\n not perfect square");
    }
    }

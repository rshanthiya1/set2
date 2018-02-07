#include<stdio.h>
int main()
{
    int i=1,f=1,x;
    printf("enter the value");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
        printf("factorial is:%d",f);
    
}



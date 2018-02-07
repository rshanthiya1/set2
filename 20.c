#include<stdio.h>
int main()
{
    int i,x,s=0;
    printf("enter the value");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
    s=i*x;
    printf("\n %d*%d=%d",i,x,s);
    }
}

#include<stdio.h>
int main()
{
    int x,s=0,a=0;
    printf("enter the number:");
    scanf("%d",&x);
    while(x>0)
    {
    s=x%10;
    a=a+s*s;
    x=x/10;
    }
    printf("the number is:%d",a);
    
}

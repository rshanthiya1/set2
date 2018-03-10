#include<stdio.h>
int main()
{
    int x,s,a=0;
    printf("enter the number:");
    scanf("%d",&x);
    while(x>0)
    {
    s=x%10;
    a=a*10+s;
    x=x/10;
    }
    printf("%d",a);
    
}

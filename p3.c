#include<stdio.h>
int main()
{
    int x,s=0,c=0;
    printf("enter the number:");
    scanf("%d",&x);
    while(x>0)
    {
        s=x%10;
        c=c*10+s;
        x=x/10;
    }
    printf("%d",c);
}

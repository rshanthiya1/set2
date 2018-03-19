#include<stdio.h>
int main()
{
    int x,s,i,c=1;
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the another number:");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        c=c*x;
    }
    printf("%d",c);
    
}

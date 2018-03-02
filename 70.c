#include<stdio.h>
int main()
{
    int x,c=0,i;
    printf("enter the value");
    scanf("%d",&x);
    while(i!=1)
    {
    if(x%2==0)
    {
       c=x*2;
    }
       x=x/2;
       i++;
    }
    printf("%d",c);
    
}

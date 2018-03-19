#include<stdio.h>
int main()
{
    int s,n,c=0,k=0;
    printf("enter the s value:");
    scanf("%d",&s);
    printf("enter  the n value:");
    scanf("%d",&n);
    while(n>0)
    {
        c=s%10;
        n=n/10;
    }
    printf("%d",c);
    
}

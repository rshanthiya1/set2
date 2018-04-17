#include<stdio.h>
int main()
{
    int a,b,c,d=0,g=0;
    printf("enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    d=pow(a,b);
    g=d%c;
    printf("%d",g);
    
}

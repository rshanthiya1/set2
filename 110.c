#include <stdio.h>
int main()
{
    int x,s=0,i;
    printf("enter the value:");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        s=s+i;
    }
    printf("%d",s);
}




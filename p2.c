#include<stdio.h>
int main()
{
    int f=1,i,x;
    printf("enter the number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
            printf("%d",f);

    
}

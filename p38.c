#include<stdio.h>
int main()
{
    int x,i;
    printf("ENTER THE NUMBER:");
    scanf("%d",&x);
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d",i);
        }
    }
}

#include<stdio.h>
int main()
{
    int x,i;
    printf("enter the number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(i%2==0)
        {
            printf("\n %d",i);
        }
    }
}



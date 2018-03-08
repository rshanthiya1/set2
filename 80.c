#include<stdio.h>
int main()
{
    int x,s=0,i;
    printf("enter the number:");
    scanf("%d",&x);
    while(x>0)
    {
        s=x%10;
        if(s%2!=0)
        {
            printf("%d\t",s);
        }
        x=x/10;
    }
}

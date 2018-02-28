#include<stdio.h>
int main()
{
    int x,s=0;
    printf("enter the binary number");
    scanf("%d",&x);
    while(x>0)
    {
    s=x%10;
    x=x/10;
    }
    if(s==('0'|| "1"))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    
}




#include<stdio.h>
int main()
{
    int x,s=0;
    printf("enter the value");
    scanf("%d",&x);
    if(x>0 && x<9)
    {
        printf("numeric");
    }
    else
    {
        printf("no");
    }
}

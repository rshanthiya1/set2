#include<stdio.h>
int main()
{
    int n;
    printf("enter he number:");
    scanf("%d",&n);
    if(n>=-32767 && n<=32768)
    {
        printf("INT");
    }
    else
    {
        printf("LONG");
    }
}

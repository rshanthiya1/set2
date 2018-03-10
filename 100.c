#include<stdio.h>
int main()
{
    int x,s=1,i;
    printf("enter the value:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("%d",i);
        s=s*i;
    }
    printf("\n %d",s);
}
    

#include<stdio.h>
int main()
{
    int l,c=0;
    printf("enter the l value:");
    scanf("%d",&l);
    if(l%2==0)
    {
        c=l/2;
        printf("%d",c);
    }
    
    else
    {
        printf("%d",l);
        
    }
}

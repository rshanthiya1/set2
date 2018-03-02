#include<stdio.h>
int main()
{
    int x,i,b=10,c=20;
    printf("enter the value");
    scanf("%d",&x);
        if(x>=0 && x<=10)
        {
            printf("%d",b);
        }
        else if(x>10 && x<=20)
        {
            printf("%d",c);
        }
        else
        {
            printf("otherwise");
        }
            
}

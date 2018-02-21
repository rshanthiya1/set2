#include<stdio.h>
int main()
{
    int a,b,t=0;
    printf("enter the value");
    scanf("%d%d",&a,&b);
    printf("before swpping two number is:%d%d",a,b);
    printf("after swapping two number:");
    t=a;
    a=b;
    b=t;
    printf("after swapping two number is:%d%d",a,b);
    
}



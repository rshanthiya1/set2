#include<stdio.h>
int main()
{
int n,c=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
c=c+1;
n=n/10;
}
printf("the count of integer value is:%d",c);
}

#include<stdio.h>
int main()
{
int n,a=0,s;
printf("enter the value");
scanf("%d",&n);
while(n>0)
{
s=n%10;
a=a+s;
n=n/10;
n++;
}
getch();
}

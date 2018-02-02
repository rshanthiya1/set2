#include<stdio.h>
int main()
{
int x,s,a=0,y;
printf("enter the one value:");
Scanf(" %d",&x);
y=x;
while(x>0)
{
s=(x%10);
a=a+(s*s*s);
x=x/10;
}
if(y==a)
{
printf("Armstrong ");
}
else
{
printf(" not an Armstrong ");
}
}

#include<stdio.h>
int main()
{
int x,s=0,y;
printf("enter the value");
Scanf("%d",&x);
while(x>0)
{
y=x;
s=(s*10)(x%10);
x=(x/10);
}
if(y==x)
{
printf("palindrome");
}
else
{
printf("not a palindrome ");
}
}

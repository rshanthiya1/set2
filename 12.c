#include<stdio.h>
int main()
{
int n,s=0,y;
printf("enter the value");
Scanf("%d",&n);
while(n>0)
{
y=n;
s=(s*10)(n%10);
n=(n/10);
}
if(y==n)
{
printf("palindrome");
}
else
{
printf("not a palindrome ");
}
}

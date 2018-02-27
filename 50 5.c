#include<stdio.h>
int main()
{
int n,flag=0;
printf("enter the value");
scanf("%d",&n);
while(n!=1)
{
if(n%2!=0)
{
flag=1;
}
n=n/2;
}
if(flag==0)
{
printf("yes");
}
else
{
printf("no");
}
}

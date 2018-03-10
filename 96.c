#include<stdio.h>
int x,i=2,c=0;
int main()
{
printf("enter the value:");
scanf("%d",&x);
while(i<x)
{
if(x%i==0)
{
c=c+1;
}
}
if(c==1)
{
printf("composite");
}
else
{
printf("no");
}
}

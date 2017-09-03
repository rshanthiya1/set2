#include<stdio.h>
int main()
{
int n,i=1,s=0;
printf("enter the value");
scanf("%d",&n);
while(i<n)
{
s=(i%2==0);
printf("%d",&s);
}
}

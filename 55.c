#include<stdio.h>
int main()
{
int n,m,s;
printf("enter the two values");
scanf("%d%d",&n,&m);
s=n*m;
if(s%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
s=s+i;
printf("%d",s);
}
getch();
}

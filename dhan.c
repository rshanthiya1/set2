#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0,x;
printf("enter the value");
scanf("%d",&x);
for(i=0;i<x;i++)
{
c=c+i;
printf("%d",&c);
}
getch();
}

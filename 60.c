#include<stdio.h>
int main()
{
int a,b,c,x;
printf("enter the values");
scanf("%d",x);
do
{
c=a+b;
a=b;
b=c;
printf("%d",c);
while(x<c);
}
getch();

}

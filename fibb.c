include<stdio.h>
int main()
{
    int x,a=0,b=1,c;#
    printf("enter the value");
    scanf("%d",&x);
    printf("%d",a);
    printf("%d",b);
   do
   {
       c=a+b;
       printf("%d",c);
       a=b;
       b=c;
      
   }while(c<x);
}




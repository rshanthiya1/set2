#include<stdio.h>
void main()
{
    int i,c,sum=1;
    printf("enter the number");
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        if(c%i==0)
        {
           printf("%d\t",i); 
        }
}
}

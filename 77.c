#include<stdio.h>
void main()
{
    int i,n,sum=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           printf("%d\t",i); 
        }
}
}

#include<stdio.h>
int main()
{
    int n,k,a,s=0,c=0;
    printf("ENTER THE N AND K VALUE:");
    scanf("%d%d",&n,&k);
    printf("ENTER THE NUMBER:");
    scanf("%d",&a);
    while(a>0)
    {
     s=a%10;
     if(s==k)
     {
        c=c+1; 
     }
     a=a/10;

    }
                         printf("%d",c);


}

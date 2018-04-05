#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            if(n%i==0)
            {
                s=n/i;
                printf("%d",s);
            }
        }
    }
    
}

#include<stdio.h>
int main()
{
    int n,a[56],i,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
          s=s+a[i];  
        }
    }
    printf("%d",s);
    
}

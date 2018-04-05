#include<stdio.h>
int main()
{
    int n,a[45],i,j,c=1,t;
    printf("engter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        if(a[i]==a[j])
        {
            c=c+1;
        }
        }
    }
    printf("%d",c);
}

#include<stdio.h>
int main()
{
    int n,k,i,m=1,flag;
    printf("enter the n and k value:");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        m=m*k;
        if(m==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

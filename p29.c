#include<stdio.h>
int main()
{
    int l,r,c=0,flag=0,i,s=0;
    printf("enter the two number:");
    scanf("%d%d",&l,&r);
    for(i=l;i<r;i++)
    {
        c=i*i;
        if(c>l && c<r)
        {
            s=s+1;
        }
    }
                printf("%d",s);

}

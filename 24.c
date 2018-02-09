include <stdio.h>
int main()
{
    int i,j,t,a[10],s;
    printf("enter the value");
    scanf("%d",&s);
    printf("enter the %d value",s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    printf("the asending order is:");
    for(i=0;i<s;i++)
    {
        printf("%d",a[i]);
    }
}


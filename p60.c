#include<stdio.h>
#include<string.h>
int main()
{
    char a[56],b[45];
    int i,flag=0;
    printf("enter the two string:");
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            flag=1;
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

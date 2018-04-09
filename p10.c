#include<stdio.h>
int main()
{
    int i,j,c=0;
    char s[56],a[67];
    printf("enter two string:");
    scanf("%s%s",&s,&a);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
        if(s[i]==a[j])
        {
            c=c+1;
        }
        }
    }
    if(c>1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

#include<stdio.h>
int main()
{
    char s[56];
    int i,c1=0,c2=0;
    printf("enter the string:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
        {
            c1=c1+1;
        }
        else if(s[i]==')')
        {
            c2=c2+1;
        }
    }
    if(c1==c2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

#include<stdio.h>
int main()
{
    char s[45];
    int i,flag=0;
    printf("enter the string:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A'||s[i]=='B'||s[i]=='C'||s[i]=='D'||s[i]=='E'||s[i]=='F')
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

#include<stdio.h>
#include<string.h>
int main()
{
    char s[67],i;
    printf("enter the string:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
    printf("%c",s[i]-32);
        }
    }
}

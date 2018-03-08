#include<stdio.h>
#include<string.h>
int main()
{
    char s[56];
    int c;
    printf("enter the string:");
    scanf("%s",&s);
    c=strlen(s);
    if(c%2!=0)
    {
        s[c/2]='*';
    }
    else
    {
        s[c/2]='*';
        s[(c/2)-1]='*';
    }
    printf("%s",s);
    return 0;
}

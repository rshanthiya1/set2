#include <stdio.h>
int main()
{
    char s[55];
    int i,n;
    printf("enter the string:");
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            s[i]='+';
        }
    }
    for(i=n;i>=0;i--)
    {
        if(s[i]!='+')
        {
            printf("%c",s[i]);
        }
    }
}

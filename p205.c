#include<stdio.h>
int main()
{
    char s[56];
    int i;
    printf("enter the string:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65)
        {
            printf("%c",s[i]+32);
        }
        if(s[i]>=97)
        {
          printf("%c",s[i]-32);  
        }
    }
}

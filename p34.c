#include<stdio.h>
#include<string.h>
int main()
{
    char s[56];
    int i;
    printf("ENTER THE STRING:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i=i+3)
    {
        printf("%c",s[i]);
    }
}

#include <stdio.h>
#include<string.h>
int main()
{
    char s[56];
    printf("enter the string:");
    scanf("%s",&s);
    strcat(s,".");
    printf("%s",s);
    
}

#include<stdio.h>
int main()
{
    char s[45];
    int i,c=0;
    printf("enter the string:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        c=c+1;
    }
    printf("%d",c);
}

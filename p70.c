#include<stdio.h>
int main()
{
    char s[56],s1[45];
    int i,j;
    printf("enter the two string:");
    scanf("%s%s",&s,&s1);
    for(i=0;s[i]!='\0';i++)
    {
    }
    for(j=0;s1[j]!='\0';j++,i++)
    {
        s[i]=s1[j];
    }
    printf("%s",s);
}

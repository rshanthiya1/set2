#include<stdio.h>
int main()
{
char s[45];
int i,c=0,I=1,V=5,x=10;
printf("enter the string:");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]=='I')
    {
        c=c+1;
    }
    else if(s[i]=='V')
    {
        c=c+5;
    }
    else if(s[i]=='X')
    {
        c=c+10;
    }
}
printf("%d",c);
}

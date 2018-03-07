#include<stdio.h>
#include<string.h>

int main()
{
    char str[45];
    int i,flag=0;
    printf("enter the string:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]=='a') || (str[i]=='e') ||  (str[i]=='i') ||  (str[i]=='o' )||(str[i]=='u'))
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

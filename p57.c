#include<stdio.h>
#include<string.h>
int main()
{
    char str[12],b;
    int i,c=0;
    printf("enter the string and charecter:");
    scanf("%s %c",str,&b);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==b)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}

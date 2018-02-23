#include<stdio.h>
#include<string.h>
int main()
{
    int i,c;
    char str[56];
    printf("enter the string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c=c+1;
        }
    }
    printf("special charecter is:%dc);
}




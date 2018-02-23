#include<stdio.h>
int main()
{
    int i,c=0,d=0,e=0,f=0;
    char str[56];
    printf("enter the string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c=c+1;
        }
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        {
            d=d+1;
        }
        else if(str[i]==' ')
        {
            e=e+1;
        }
        else
        {
            f=f+1;
        }
    }
    printf("\n digits:%d \n alphabets:%d \n space:%d \n special:%d",c,d,e,f);
}




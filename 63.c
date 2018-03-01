#include<stdio.h>
int main()
{
    char str[45];
    int i=0,c=1;
    printf("enter the string value");
    gets(str);
    while(syr[i]!='\0')
    {
        if(str[i]==" "|| str[i]=='\n'|| str[i]=="\t")
        {
            c=c+1;
        }
        i++;
    }
    printf("%d",c);
}


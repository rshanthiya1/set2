#include<stdio.h>
int main()
{
    char str[34];
    int i,c=1;
    printf("enter the string");
    scanf("%[^\n]s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            c=c+1;
             
            
        }
    }
    printf("%d",c);
   
}

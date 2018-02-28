
#include<stdio.h>
int main()
{
    char str1[76],str2[54];
    int i,c=0,d=0;
    printf("enter the two string");
    scanf("%s%s",&str1,&str2);
    for(i=0;str1[i]!='\0';i++)
    {
        c+=str1[i];
    }
    printf("%d",c);
    for(i=0;str2[i]!='\0';i++)
    {
        d+=str2[i];
    }
    printf("\n %d",d);
    if(c>d)
    {
        printf("%s",str1);
    }
    else
    {
    printf("%s",str2);
    }
}




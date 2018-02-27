#include<stdio.h>
void main()
{
    char ch;
    printf("enter the charecter");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>=0 && ch<=9))
    {
        printf("yes");
    }
    
}




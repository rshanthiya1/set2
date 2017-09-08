#include <stdio.h>
#define MAX_SIZE 100 


int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alpha, digits, others;

    alpha = digits = others = 0;


    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alpha s++;
        else if(*s>='0' && *s<='9')
            digits++;
        else
            others++;

        s++;
    }

    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}

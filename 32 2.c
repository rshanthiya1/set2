#include <stdio.h>
 
int main(int arg, char *argv[])
{
    int i = 0;
 
    if (arg== 1)
    {
        printf("No sentence given on command line");
        return;
    }
    else
    {
        printf("The words in the sentence are:");
        for (i = 1;i < argc;i++)
        {
            printf("\n%s", argv[i]);
         }
        printf("\n\nTotal number of words:");
        printf(" %d", arg-1);
        }
        }

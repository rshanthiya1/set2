#include <stdio.h>
 
int main(int argc, char *argv[])
{
    int i = 0;
 
    if (argc == 1)
    {
        printf("\n No sentence given on command line");
        return;
    }
    else
    {
        printf("\nThe words in the sentence are:");
        for (i = 1;i < argc;i++)
        {
            printf("\n%s", argv[i]);
         }
        printf("\n\nTotal number of words:");
        printf(" %d", argc-1);
        }
        }

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char s[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any string");
   gets(s);
   for(i = 0; s[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d", l);
   for(i = 0; i <= l-1; i++)
   {
      if(s[i] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the string are %d", f);
   getch();
}

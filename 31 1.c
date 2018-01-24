#include <stdio.h>

int main()
{
   char str[1000], ch;
   int i, f = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character : ");
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++f;
   }

   printf("Frequency of %c = %d", ch, f);

   return 0;
}

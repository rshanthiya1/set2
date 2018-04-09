#include <stdio.h>
#include<string.h>
int main ()
{
  char s[56];
  int i;
  printf ("enter the string:");
  scanf ("%s", &s);
  for (i = 0; s[i] != '\0'; i++)
    {
      if (i % 2 == 0)
	{
	  printf ("%c%c", s[i + 1], s[i]);
	}
    }
}

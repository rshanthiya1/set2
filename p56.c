#include <stdio.h>

int main()
{
	char s[45],c;
	int i;
	scanf("%s %c",&str,&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			printf("%d",i+1);
		}
	}
}

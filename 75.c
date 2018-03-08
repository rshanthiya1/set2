#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int b;
	scanf("%s",a);
	b=strlen(a);
	if(b%2==0)
	{
		a[b/2]='*';
		a[(b/2)-1]='*';
	}
	else
	{
		a[b/2]='*';
	}
	printf("%s",a);
	return 0;
}

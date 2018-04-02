#include <stdio.h>

int main()
{
	int n,mul=1,flag=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			mul=mul*2;
			if(mul==n)
			{
				flag=1;
			}
			
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter the value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d",i);
	}
	for(i=0;i<4;i++)
	{
	s=s+i;
	}
	printf("sum is:%d",s);

}

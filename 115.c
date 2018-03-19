#include<stdio.h>
int main()
{
	int y,m,a[100],i,j,temp=0,c;
	scanf("%d %d",&y,&m);
	for(i=0;i<y;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<y;i++)
	{
		for(j=i+1;j<y;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d",a[c]);
	return(0);	
}

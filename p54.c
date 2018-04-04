#include <stdio.h>

int main(void) 
{
	char str1[20],str2[20];
	int i,flag;
	scanf("%s %s",str1,str2);
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			if(str1[i]==str2[i])
			{
			    flag=1;
			}
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
}
			    

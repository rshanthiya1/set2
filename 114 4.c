#include<stdio.h>
#define MAX_SIZE 1000
void main()
{
    int N[MAX_SIZE],c[MAX_SIZE],n;
    int i,j;
    printf("ENTER THE ARRAY SIZE");
    scanf("%d",&n);
    printf("ENTER VALUE OF N");
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    printf("ENTER VALUE OF K");
    for(j=0;j<n;j++)
    {
        scanf("%d",&c[j]);
      
    }
  for(i=0;i<n;i++)
  {
   if(c[i]%2!=0)
    printf("ODD NUMBER IN K:\t%d",c[i]);
}
}

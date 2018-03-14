#include<stdio.h>
main()
{
int n,a[100],c[100],i,j,c=0;
printf("Enter the no:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
}
for(i=0;i<n;i++)
{
if(a[i]!=c[i])
{
c++;
}
}
printf("The no. of changes is: %d",c);
}

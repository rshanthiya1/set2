#include <stdio.h>
#include <math.h>
int main()
{
int low, high, i, temp1, temp2,
printf("Enter two numbers(intervals):
scanf("%d %d", &low, &high);
printf("Armstrong numbers between
for(i = low + 1; i < high; ++i)
{
temp2 = i;
temp1 = i;
while (temp1 != 0)
{
temp1 /= 10;
++n;
}

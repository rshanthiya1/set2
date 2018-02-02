#include <stdio.h>
 
void main()
{
    long n, temp, d, sum = 0;
 
    printf("Enter the number");
    scanf("%ld", &n);
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        sum  = sum + d;
        n /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}

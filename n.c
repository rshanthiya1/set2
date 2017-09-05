#include <stdio.h>
 
void main()
{
    long n, temp, digit, sum = 0;
 
    printf("Enter the number \n");
    scanf("%ld", &n);
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        sum  = sum + digit;
        n /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}

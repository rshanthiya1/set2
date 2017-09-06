#include <stdio.h>
 
void main()
{
    long num, temp, digit, s = 0;
 
    printf("Enter the number \n");
    scanf("%ld", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        s = s + digit;
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, s);
}

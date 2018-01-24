#include <stdio.h>
 
void main()
{
    int i, n, odd = 0, even = 0;
 
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            even = even + i;
        else
            odd = odd + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}

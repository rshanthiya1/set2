#include <stdio.h>
 
void main()
{
    int  f1 = 0, f2 = 1, f3, limit, count = 0;
 
    printf("Enter the limit to generate the Fibonacci Series \n");
    scanf("%d", &limit);
    printf("Fibonacci Series is ...\n");
    printf("%d\n", f1);
    printf("%d\n", f2);
    count = 2;
    while (count < limit)
    {
        f3 = f1 + f2;
        count++;
        printf("%d\n", f3);
        f1 = f2;
        f2 = f3;
    }
}

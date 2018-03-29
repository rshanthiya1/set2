#include <stdio.h>
int main()
{
    int a, b, h;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    
    h = (a>b) ? a : b;

   
    while(1)
    {
        if( h%a==0 && h%b==0 )
        {
            printf("The LCM of %d and %d is %d.", a, b,h);
            break;
        }
        ++h;
    }
    return 0;
}

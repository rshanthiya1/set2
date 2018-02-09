#include <stdio.h>
int main()

{

    int a[50], s, i, l;

    printf("\n Enter the size of the array: ");

    scanf("%d", &s);

    printf("\n Enter %d elements of  the array: ", s);

    for (i = 0; i < s; i++)

        scanf("%d", &a[i]);

    l = a[0];

    for (i = 1; i < s; i++)

    {

        if (l > a[i])

            printf("%d",l);

    }

    printf("\n largest element present in the given array is : %d", l);

}

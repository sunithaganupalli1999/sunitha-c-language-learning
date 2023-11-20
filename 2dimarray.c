#include <stdio.h>
int main()
{
    int a[2][3], c, d;

    printf("the array elements are:\n");
    for (c = 0; c < 2; c++) // rows
    {
        for (d = 0; d < 3; d++) // colums
        {
            scanf("%d", &a[c][d]);
        }
    }
    for (c = 0; c < 2; c++) // rows
    {

        for (d = 0; d < 3; d++) // colums
        {
            printf("%d", a[c][d]);
        }
        printf("\n");
    }
        return 0;
    }

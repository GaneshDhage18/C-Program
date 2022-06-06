#include <stdio.h>

int main()
{
    // int i, j, temp;
    // int a[10] = {10, 9, 5, 6, 3, 7, 8, 1, 0, 2};

    // for (i = 0; i < 10; i++)
    // {
    //     for (j = 0; j < 10; j++)
    //     {
    //         if (a[j] > a[i])
    //         {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    // printf("printing sorrted elelments list...\n");
    // for (i = 0; i < 10; i++)
    // {
    //    printf("%d\n", a[i]);
    // }

    int a[10] = { 8, 3, 4, 1, 9,2, 5, 7, 6, 10};
    int i, j, temp;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j< 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("sorting of array is:\n");

    for (i = 9; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }

    return 0;
}
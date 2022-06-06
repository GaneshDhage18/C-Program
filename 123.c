#include <stdio.h>

int main()
{

    int a[10] = {9, 8, 3, 4, 1, 2, 5, 7, 6, 10};
    int i, j, temp;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = i;
                i = j;
                j = temp;
            }
        }
    }

    printf("sorting of array is:\n");

    for (i = 0; i < 10; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}
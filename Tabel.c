#include <stdio.h>

int main()
{
    int i, n, j;
    printf("Enter the number of Rows\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n\n");

        for (j = 1; j <= n; j++)
        {
            printf("%d   ", j*i);
        }
    }

    return 0;
}
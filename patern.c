
// printf("*\n**\n***\n****\n");
// printf("1\n2 3\n4 5 6\n7 8 9 10\n");
// printf("   1\n  2 3\n 4 5 6\n7 8 9 10\n");
// printf("   *\n  * *\n * * *\n* * * *\n");

#include <stdio.h>
int main()
{
    int i, j, spc, rows, k;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    spc = rows + 4 - 1;
    for (i = 1; i <= rows; i++)
    {
        for (k = spc; k >= 1; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
            printf("%d ",i);
        printf("\n");
        spc--;
    }

    // int i, j, rows, k = 1;

    // printf("Enter the rows: ");
    // scanf("%d", &rows);

    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d ", k++);
    //     }
    //     printf("\n");
    // }

    return 0;
}
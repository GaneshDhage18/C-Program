#include <stdio.h>
int main()
{
    int i, value[5];
    printf("Enter 5 integers:");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", &value[i]);
    }

    printf("Displaying integers:",i);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", value[i]);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char c[] = {};
    int i;
    printf("Enter the name\n");
    scanf("%s", &c);

    for (i = 0; c[i] != '\0'; i++)
        ;
    {
        printf("%c", c);
    }

    printf("%s", c);
    return 0;
}
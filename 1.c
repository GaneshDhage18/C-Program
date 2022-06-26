#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("your 18+ so you can vote\n");
    }
    else if (age > 10)
    {
        printf("your under 18 so you can't vote but you can vote for kids\n");
    }

    else if (age > 3)
    {
        printf("your your between 3 to 10 and you can vote for bebies\n");
    }

    return 0;
}

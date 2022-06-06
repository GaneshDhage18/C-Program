#include <stdio.h>

int main()
{
    int a, b, c, choice;

    printf("\n1.Addition\n 2.Substriction\n 3.Multiplication\n 4.dividation\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the first number\n");
        scanf("%d", &a);
        printf("Enter the second number\n");
        scanf("%d", &b);
        c = a + b;
        printf("The Addition is :%d", c);
        break;
        

    case 2:
        printf("Enter the first number\n");
        scanf("%d", &a);
        printf("Enter the second number\n");
        scanf("%d", &b);
        c = a - b;
        printf("The Substriction is :%d", c);
        break;

    case 3:
        printf("Enter the first number\n");
        scanf("%d", &a);
        printf("Enter the second number\n");
        scanf("%d", &b);
        c = a * b;
        printf("The multiplaction is :%d", c);
        break;

    case 4:
        printf("Enter the first number\n");
        scanf("%d", &a);
        printf("Enter the second number\n");
        scanf("%d", &b);
        c = a / b;
        printf("The dividation is :%d", c);
        break;

    default:
        printf("Enter a valid case\n");
        break;
    }

    return 0;
}
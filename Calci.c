#include <stdio.h>
#include <conio.h>

int main()
{
    int S1, S2, S3, total, marks;
    float per;
    int a, b, c, choice;
    int i, n;

    printf("Enter Your Choice\n");
    printf(" 1.Addition\n 2.Multiplication\n 3.Division\n 4.Substraction\n 5.Cube\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the two number\n");
        scanf("%d %d", &a, &b);
        c = a + b;
        printf("The Addition of two number is: %d", c);
        break;

    case 2:
        printf("Enter the two number\n");
        scanf("%d %d", &a, &b);
        c = a * b;
        printf("The Multiplication of two number is: %d", c);
        break;

    case 3:
        printf("Enter the two number\n");
        scanf("%d %d", &a, &b);
        c = a / b;
        printf("The division of two number is: %d", c);
        break;

    case 4:
        printf("Enter the two number\n");
        scanf("%d %d", &a, &b);
        c = a - b;
        printf("The Substraction of two number is: %d", c);
        break;

    case 5:
        printf("Enter the number\n");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            printf("%d =  ", i);

            printf("%d \n", i * i * i);
        }
        break;

    default:
        printf("Enter the valid choice\n");
        break;
    }

    printf("\nEnter the marks of Total Subject:\n");
    scanf("%d %d %d", &S1, &S2, &S3);

    total = S1 + S2 + S3;
    printf("The total is: %d", total);

    per = (total / 300.0) * 100;
    printf("\npercentage= %.2f", per);

    if (per >= 80)
    {
        printf("\nGrade A");
    }

    else if (per <= 80 & per >= 60)
    {
        printf("\nGrade B");
    }

    else if (per <= 60 & per >= 50)
    {
        printf("\nGrade C");
    }

    else if (per <= 50 & per >= 35)
    {
        printf("\nGrade D");
    }

    else
    {
        printf("\nYour fail");
    }

    return 0;
}
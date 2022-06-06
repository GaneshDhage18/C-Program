#include<stdio.h>

int main()
{
    // int num;
    // printf("Enter the number less than 10\n");
    // scanf("%d",&num);
    // if (num<10)     
    // {
    //     printf("The number is less than 10\n");
    // }
    // else
    // {
    //     printf("The number is greater then 10\n");
    // }

    // return 0;


    int a,b,c;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    c=a-b;

    if (a>b)
    {
        printf("The substriction is : %d",c);
    }

    else
    {
        printf("Please enter the valid number\n");
    }

    return 0;
    
    
}
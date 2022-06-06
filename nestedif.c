#include<stdio.h>

int main()
{
    int a;
    printf("Enter either 0 or 1\n");
    scanf("%d",&a);

    if (a==1)
    {
        printf("Number 1 is entered\n");
    }
    else
    {
        if (a==0)
        {
            printf("number 0 is entered\n");
        }

        else
        {
            printf("wrong input\n");
        }
        
    }

    return 0;
    
}
#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        // printf("%d ",i);
        sum=i*n;
    }
    printf("\nThe factorial of %d is: %d",n,sum);

    return 0;
    
}
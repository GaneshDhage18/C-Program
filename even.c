#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("-----Enter the number ");
    scanf("%d",&n);

    printf("-----THe even number are:");

    for ( i = 1; i <= n; i++)
    {
        printf("%d ",2*i);
        sum+=2*i;
    }
    printf("\n------The sum of natural even number upto %d terms: %d",n,sum);

    return 0;
}
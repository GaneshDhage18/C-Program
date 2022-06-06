#include<stdio.h>

int main()
{
     int i=1 , number=0; 

        printf("Enter the number\n");
        scanf("%d",&number);
        while (i<=10)
        {
            printf("%d \n",number*i);
            i++;
        }
}
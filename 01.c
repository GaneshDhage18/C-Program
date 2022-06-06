#include <stdio.h>

int main()
{
    // int i,n;
    // printf("Enter The number\n");
    // scanf("%d", &n);

   

    //     for (i=0; i <= n; i++)
    //     {
    //         printf("%d ",i);
    //     }
    
        int i=1 , number=0; 

        printf("Enter the number\n");
        scanf("%d",&number);
        while (i<=10)
        {
            printf("%d \n",number*i);
            i++;
        }
        
    //      int i,n,sum=0;
    //      float avg;
    
    // printf("Enter the n number\n");
    // scanf("%d",&n);
    
    // for(i=1; i<=n; i++)
    // {
    //      printf("%d ",i);
    //     sum = sum + i;
    //     avg= sum/n;
    // }
    
    // printf("\nThe sum is: %d ",sum);
    // printf("\n The avg is: %f",avg);


    
    return 0;
}
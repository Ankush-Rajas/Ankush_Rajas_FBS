// Print perfect numbers in the given range 1 to n.

#include <stdio.h>

int main()
{

    int n;
    
    printf("enter the number range \n");
    
    scanf("%d", &n);
    
    for (int num = 1; num <= n; num++)
    {
        int sum = 0;

        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }

            // printf("%d\n", sum);
        }

        if (num == sum)
        {
            printf("the number is perfect number %d\n", num);
        }
        // else
        // {
        //     printf("the number is not perfect number \n");
        // }
    }
    return 0;
}

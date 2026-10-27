// Print armstrong numbers in the given range 1 to n.

#include <stdio.h>


int main() {
    int n;
    printf("enter the number range\n");

    scanf("%d", &n);

    for (int num = 1; num <= n; num++)
    {
        int temp = num;
        int count = 0;
        int result = 0;

        for (int i = num; i > 0; i = i / 10)
        {
           count++;
        }


        for (int i = num; i > 0 ; i = i / 10)
        {
            int digit = i % 10 ;
            int power = 1;

            for (int i = 1; i <= count; i++)
            {
                power = power * digit ;

            }

            result = result + power;
            
        }
        
        if (result == temp)
        {
            printf("%d ", temp);
        }
        
    }
    

    return 0;
}
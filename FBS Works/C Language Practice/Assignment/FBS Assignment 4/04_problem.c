// Print strong numbers in the given range 1 to n.

#include <stdio.h>

int main()
{
    int number;

    printf("enter the number range is :\n");

    scanf("%d", &number);

    for (int num = 1; num <= number; num++)
    {
        int sum = 0;
        int temp = num;
        int tempNum = num;

        for (; tempNum > 0 ; tempNum = tempNum / 10)
        {
          
            int digit = tempNum % 10;
            int count = 1;
            for (int i = 1; i <= digit; i++)
            {
                count = count * i;
            }
            sum = sum + count;

        }


        if (temp == sum)
        {
            printf("%d ", temp);
        }
    }

    return 0;
}
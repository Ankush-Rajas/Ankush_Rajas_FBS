// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include <stdio.h>

int main()
{
    int num;

    int sum = 0;

    printf("enter the number is :\n");

    scanf("%d", &num);

    int temp = num;

    while (num > 0)
    {
       int digit = num % 10;
        int count = 1;
        for (int i = 1; i <= digit; i++)
        {
            count = count * i;           
        }
        sum = sum + count;

        num = num / 10;
    }

    printf("%d\n", sum);

    if (temp == sum)
    {
        printf("the number is strong number");
    }else{
        printf("the number is not strong");
    }
    
    return 0;
}
// Print prime numbers in the given range 1 to n.

#include <stdio.h>

int main()
{

    int numrange;
    printf("enter the range\n");
    scanf("%d", &numrange);

    for (int num = 2; num <= numrange; num++)
    {

        int isprime = 1;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime == 1)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
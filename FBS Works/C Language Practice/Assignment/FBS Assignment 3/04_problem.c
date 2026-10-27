// Check the given number is prime or not.
// Input: n = 7
// Output: Prime

#include <stdio.h>

int main()
{

    int number = 17;
    int num = 2;
    int isPrime = 1;

    while (num < number / 2)
    {
        if (number % 2 == 0)
        {
            isPrime = 0;
            break;
        }

        num++;
    }

    if (isPrime == 1)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");
    }

    return 0;
}
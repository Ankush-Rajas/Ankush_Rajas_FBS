// Accept a number and check if it is divisible by 3, 5, or both.
// (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
// both" or” Divisible by None”)

#include <stdio.h>

int main()
{
    int number;

    printf("enter the number : \n");

    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("the number is Divisible by both ");
    }
    else if (number % 3 && number % 5 != 0)
    {
        printf("the number is Divisible by 3 but not by 5 ");
    }
    else if (number % 5 && number % 3 != 0)
    {
        printf("the number is Divisible by 5 but not by 3");
    }
    else
    {
        printf("random division");
    }

    return 0;
}
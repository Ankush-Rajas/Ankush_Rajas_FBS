// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
// desired operations.

// Skip any whitespace first, then read the character.

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    char operator;

    printf("enter the number \n");

    scanf("%d", &num1);
    scanf(" %c", &operator);
    scanf("%d", &num2);

    if (operator == '+')
    {
        sum = num1 + num2;
        printf("the addition is %d", sum);
    }
    else if (operator == '-')
    {
        sum = num1 - num2;
        printf("the substraction is %d", sum);
    }
    else if (operator == '*')
    {
        sum = num1 * num2;
        printf("the multiplication is %d", sum);
    }
    else if (operator == '/')
    {
        if (num2 != 0)
        {
            sum = num1 / num2;
            printf("The division is %d", sum);
        }
        else
        {
            printf("Cannot divide by zero");
        }
    }
    else if (operator == '%')
    {
        sum = num1 % num2;
        printf("the modulus is %d", sum);
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}
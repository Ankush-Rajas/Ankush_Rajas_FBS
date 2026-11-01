// Accept two numbers from user and an operator
// (+,-,/,*,%) based on that perform the desired
// operations.

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
        printf("the addition of two number is %d", sum);
    }
    else if(operator == '-')
    {
        sum = num1 - num2;
        printf(" the substraction of two number is %d", sum);
    }
    else if(operator == '*')
    {
        sum = num1 * num2;
        printf(" the multiplication of two number is %d", sum);
    }
    else if(operator == '/')
    {
        sum = num1 / num2;
        printf(" the division of two number is %d", sum);
    }
    else if(operator == '%')
    {
        sum = num1 % num2;
        printf(" the modulus of two number is %d", sum);
    }
    else{
        printf("Nothing");
    }
    

    return 0;
}
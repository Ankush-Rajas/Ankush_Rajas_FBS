// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong



#include <stdio.h>

int main()
{
    int number = 153;
    int temp = number;
    int num = number;
    int digit, result = 0;
    int sum , i ;
    int count = 0;

    while (number > 0)
    {
        count++;
        number = number / 10;
    }

    while (temp > 0)
    {
        digit = temp % 10;
        sum = 1;
        i = 1;
        while (i <= count)
        {
            sum = sum * digit;
            i++;
        }

        result = sum + result;

        temp = temp / 10;
    }

    if (num == result)
    {
        printf("the number is armstrome");
    }else{
        printf("the number is not armstrome");
    }
    
    return 0;
}
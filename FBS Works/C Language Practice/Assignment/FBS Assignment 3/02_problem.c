// Print table for given number.
// Input: n = 5
// Output: 5 10 15 20 25 30 35 40 45 50

#include <stdio.h>

int main()
{
    int number;
    int start = 1;

    printf("enter the number\n");
    scanf("%d", &number);

    int last_num;
    printf("enter the last to division\n");
    scanf("%d", &last_num);

    while (start <= last_num)
    {
        printf("the print table is %d * %d = %d \n", number , start, number * start);
        start++;
    }

    return 0;
}
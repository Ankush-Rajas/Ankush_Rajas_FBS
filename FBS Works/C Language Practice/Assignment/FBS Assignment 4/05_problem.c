// 5) Write a menu driven program to take a number for user and perform operations as follows.

// Press number :

//  1.To check number is even or odd.
//  2.To check number is prime or not.
//  3.To check number is pallindrome or not.
//  4.To check number is positive, negative or zero.
//  5.To reverse a number.
//  6.To find sum of digits.

#include <stdio.h>

int main()
{

    int number;
    printf("enter the number which number find \n");
    scanf("%d", &number);

    while (1 > 0)
    {

        int num;
        printf(" check number is even or odd please enter 1\n");
        printf(" check number is prime or not please enter 2\n");
        printf(" check number is pallindrome or not please enter 3\n");
        printf(" check number is positive, negative or zero please enter 4\n");
        printf(" reverse a number please enter 5\n");
        printf(" find sum of digits please enter 6\n");
        printf(" exist please enter 7\n");

        scanf("%d", &num);

        if (num == 1)
        {
            if (number % 2 == 0)
            {
                printf("the numbre is even\n");
            }
            else
            {
                printf("the number is odd\n");
            }
        }
        else if (num == 2)
        {
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
                printf("the number is prime\n");
            }
            else
            {
                printf("the number is not prime\n");
            }
        }
        else if (num == 3)
        {

            int n1 = number % 10;
            int t1 = number / 10;
            int n2 = t1 % 10;
            int t2 = t1 / 10;
            int n3 = t2 % 10;

            if (n1 == n3)
            {
                printf("the number is pallindrome\n");
            }
            else
            {
                printf("the number is not pallindrome\n");
            }
        }
        else if (num == 4)
        {
            if (number > 0)
            {
                printf("the number is positive\n");
            }
            else if (number < 0)
            {
                printf("the number is negative\n");
            }
            else
            {
                printf("the number is zero\n");
            }
        }
        else if (num == 5)
        {
            int store = 0;
            for (int i = number; i > 0; i = i / 10)
            {
                int newn = i % 10;
                store = store * 10 + newn;
            }
            printf("%d\n", store);
        }
        else if (num == 6)
        {
            int sum = 0;
            while (number > 0)
            {
                int newnumber = number % 10;
                sum = sum + newnumber;
                number = number / 10;
            }

            printf("%d\n", sum);
        }
        else
        {
            printf("code stope\n");
            break;
        }
        }

    return 0;
}
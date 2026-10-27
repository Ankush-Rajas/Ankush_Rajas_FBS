// 5. Print an inverted pyramid pattern
//  Input: n = 5
//  Output:
// *****
// ****
// ***
//  **
//  *

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }

        printf("\n");
    }

    return 0;
}
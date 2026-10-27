// 3. Print an inverted right-angled triangle pattern
// Input: n = 5
// Output:
// *****
// ****
// ***
// **
// *

#include <stdio.h>


int main() {
    int n;
    printf("enter the number \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
// 6. Print a half pyramid using numbers
//  Input: n = 5
//  Output:
// 1
// 12
// 123
// 1234
// 12345



#include <stdio.h>


int main() {
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }

        printf("\n");
        
    }
    

    return 0;
}

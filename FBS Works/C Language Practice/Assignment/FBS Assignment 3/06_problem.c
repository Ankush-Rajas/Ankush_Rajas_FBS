// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect


#include <stdio.h>


int main() {


    int n;
    int sum = 0 ;

    printf("enter the number \n");

    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i ;
        }
        
        printf("%d\n",sum);
    }


    if (n == sum )
    {
        printf("the number is perfect number \n");
    }else
    {
        printf("the number is not perfect number \n");
    }

    return 0;
}

// Find factorial of given number.
// Input: n = 5
// Output: 120


#include <stdio.h>


int main() {
    
    int num; 
    int fact = 1;
    printf("enter the number \n");

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("the number is %d", fact);

    return 0;
}
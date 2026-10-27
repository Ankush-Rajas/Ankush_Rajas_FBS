// Find Sum of first and last digit of given number.
// Input: n = 12345
// Output: 6 (1 + 5)

#include <stdio.h>


int main() {
    int num = 121;

    int n1 = num % 10;
    int t1 = num / 10 ;
    int n2 = t1 % 10;
    int t2 = t1 / 10 ;
    int n3 = t2 % 10 ;

    printf("the sum is n1 and n2 is %d and %d is = %d", n1 , n3 , n1 + n3);

    return 0;
}
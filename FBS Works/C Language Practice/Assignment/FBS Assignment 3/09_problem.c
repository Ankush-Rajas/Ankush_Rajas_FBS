// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome


#include <stdio.h>


int main() {
    int num = 121;

    int n1 = num % 10;
    int t1 = num / 10 ;
    int n2 = t1 % 10;
    int t2 = t1 / 10 ;
    int n3 = t2 % 10 ;

    if (n1 == n3)
    {
       printf("the number is pallindrome ");
    }else
    {
        printf("the number is not pallindrome");
    }
    
    

    return 0;
}
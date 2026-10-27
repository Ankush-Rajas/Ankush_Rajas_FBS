// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15


#include <stdio.h>



int main() {
    
    int start , end ;
    int sum = 0;

    printf("enter the number \n");

    scanf("%d", &start);
    scanf("%d", &end);

    while (start <= end)
    {
       sum = sum + start;
        
       start++;
    }
    
    printf("the sum of given number is %d", sum);


    return 0;
}
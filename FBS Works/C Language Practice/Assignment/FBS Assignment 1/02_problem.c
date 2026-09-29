// Write a program to check given 3 digit number is pallindrome or not.



#include<stdio.h>


int main(){
    // int num1, num2, num3;

    // printf("enter the number\n");

    // scanf("%d%d%d", &num1, &num2, &num3);
    

    // if (num1 == num3){
    //     printf("the number is pallindrome");
    // }else
    // {
    //     printf("the number is not pallindrome");
    // }
    

    int num = 238;
    int n1 , n2, n3, q1, q2, sum;

    n1 = num % 10;
    q1 = num / 10;
    n2 = q1 % 10;
    q2 = q1 / 10;
    n3 = q2 % 10;

    if (n1 == n3){
        printf("the number is pallindrome");

    }else
    {
        printf("the numebr is not pallindrome");
    }
    
    
    return 0;
}


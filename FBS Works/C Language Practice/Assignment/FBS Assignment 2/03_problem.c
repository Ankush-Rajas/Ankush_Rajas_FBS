// Write a program to find greatest of three numbers
// using nested if-else. 

#include <stdio.h>



int main() {
    int a, b, c;

    printf("enter the number \n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf(" a number is greater");
        }else
        {
            printf("c is greater");
        }
        
        
    }else
    {
        if (b > c)
        {
            printf("b is greater ");
        }else{
            printf("c is greater");
        }
        
    }
    
    

    return 0;
}
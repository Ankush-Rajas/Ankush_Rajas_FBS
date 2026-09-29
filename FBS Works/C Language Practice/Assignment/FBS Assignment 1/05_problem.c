// Write a program to check whether a person is eligible to vote (age ≥ 18).


#include<stdio.h>


int main(){
    int age ;

    printf("enter the age\n");

    scanf("%d", &age);

    if (age >= 18)
    {
        printf("the person is eligible to vote");
    }else{
        printf("the person is not eligible to vote");
    }
    

    return 0;
}
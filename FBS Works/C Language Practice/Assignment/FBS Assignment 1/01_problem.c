// Write a program to check whether a number is even or odd.

#include<stdio.h>


int main(){

    int num ;

    printf("enter a number\n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("the value is even\n");

    }else{
        printf("the value is odd\n");
    }


    return 0;
}
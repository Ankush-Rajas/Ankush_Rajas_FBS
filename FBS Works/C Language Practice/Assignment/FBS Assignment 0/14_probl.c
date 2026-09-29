// Write a C program to reverse a three-digit number.

#include<stdio.h>


int main(){
    int a = 237;

    int b = a % 10;
    int c = a / 10;
    int d = c % 10;
    int e = c / 10;

    printf("%d%d%d", b,d,e);

    return 0;
}
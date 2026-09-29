#include<stdio.h>

int main(){

    int a = 20 ;
    int b = 50 ;

    int temp ;

    temp = a ;
    a = b ;
    b = temp;

    printf("the value is a and b is %d and %d", a , b);
}
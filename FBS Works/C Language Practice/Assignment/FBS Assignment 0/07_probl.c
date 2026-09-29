#include<stdio.h>


int main(){

    int a = 150;

    int b = a / 60 ;
    int c = a % 60;

    printf("the time is %d hours ",b);

    printf("%d minutes remaining",c);
}
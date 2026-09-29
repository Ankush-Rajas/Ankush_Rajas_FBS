#include<stdio.h>


int main(){
    int a =50;
    int b = 30;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d", a ,b);

    return 0;
}
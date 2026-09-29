#include<stdio.h>

int main(){

    int a , b, c, d, e;

    printf("please Enter the marks\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    int sum = a+b+c+d+e;

    printf("the total marks is %d\n", sum);

    float percentage = sum / 5;

    printf("the percentage of marks is %.2f\n", percentage);

}
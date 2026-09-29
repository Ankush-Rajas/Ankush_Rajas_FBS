#include<stdio.h>

int main(){
    float s, p, r,t;
    printf("enter the value\n");

    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);

    s = (p*r*t)/100;

    printf("the simple interest is %.2f", s);


}
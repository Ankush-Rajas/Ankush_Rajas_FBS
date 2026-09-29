#include<stdio.h>

int main(){
    
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("Enter the value\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    printf("the value is %d %d %d %d %d \n", a,b, c,d,e);
    printf("the average is %d", (a+b+c+d+e)/5);
 
}
#include<stdio.h>

int main(){
    float area , base, height;
    printf("Enter a number \n");
    scanf("%f",&base);
    scanf("%f", &height);

    area = 1.0/2.0*base*height;
    // area = 0.5 * base * height;

    printf("the area of triangle is %.2f" , area);

}

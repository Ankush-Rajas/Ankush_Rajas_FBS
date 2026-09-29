#include<stdio.h>

int main(){
    int lenght, width;

    printf("Enter the value\n");

    scanf("%d", &lenght);
    scanf("%d", &width);
    int sum = 2*(lenght+width);

    printf("the perimeter is %d", sum);

}
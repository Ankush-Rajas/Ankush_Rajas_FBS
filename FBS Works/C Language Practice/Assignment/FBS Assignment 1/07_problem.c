#include<stdio.h>


int main(){
    float basic_salary;

    float da, ta, hra, sum;

    printf("enter the salary \n");
    scanf("%f", &basic_salary);

    if (basic_salary <= 5000)
    {
        da = (basic_salary * 10)/100;
        ta = (basic_salary * 20)/100;
        hra = (basic_salary * 25)/100;

        sum = basic_salary + da + ta + hra;

        printf("the total salary is %.2f %.2f %.2f %.2f %.2f", sum, basic_salary, da ,ta,hra );

    }else{
        da = (basic_salary * 15)/100;
        ta = (basic_salary * 25)/100;
        hra = (basic_salary * 30)/100;

        sum = basic_salary + da + ta + hra;

        printf("the total salary is %.2f %.2f %.2f %.2f %.2f", sum, basic_salary, da ,ta,hra );
    }
    

    return 0;
}
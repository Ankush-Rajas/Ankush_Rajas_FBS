// Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600
// discount is 15% otherwise there is not discount.

#include <stdio.h>

int main()
{
    float product_price;
    
    float is_student = 1;
    float student = 1;

    printf("please enter the price ,how much buying: ");
    scanf("%f", &product_price);

    printf("hey , are you student or not if you are are student please enter 1 otherwise 0: \n");
    scanf("%f", &is_student);

    if (is_student == student)
    {
        if (product_price > 500)
        {
            float discount = (product_price * 20) / 100;
            product_price = product_price - discount;
            printf("the buy is %.2f", product_price);
        }
        else
        {
            float discount = (product_price * 10) / 100;
            product_price = product_price - discount;
            printf("the buy is %.2f", product_price);
        }

        printf("the student is purchased discount");
    }
    else
    {
        if (product_price > 600)
        {
            float discount = (product_price * 15) / 100;
            product_price = product_price - discount;
            printf("the buy is %.2f", product_price);
        }
        else
        {
            printf("No discount %.2f", product_price);
        }
    }

    return 0;
}
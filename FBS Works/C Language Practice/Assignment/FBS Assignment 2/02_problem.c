<<<<<<< HEAD
// Accept three sides of a triangle from the user and
// determine whether the triangle is equilateral,
// isosceles, or scalene


#include <stdio.h>



int main() {
    int a , b , c;

    printf("enter the number \n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("the triangle is equilateral");

    }
    else if (a == b || a == c || b == c )
    {
        printf("the triangle is isosceles");
    }
    else if (a != b && b != c && a != c)
    {
        printf("the triangle is scalene");
    }
    else
    {
        printf("kuch galt hai ");
    }
    


    return 0;
=======
// Accept three sides of a triangle from the user and determine whether the triangle is
// equilateral, isosceles, or scalene.



#include <stdio.h>



int main() {
    int a , b, c;

    printf("enter the value\n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("the triangle is Equilateral");
    }else if (a == b || a == c || b == c)
    {
        printf("the triangle is Isosceles");
    }else if (a != b && b != c && a != c){
        printf("the triangle is scalene");
    }
    else{
        printf("nothing");
    }
    
    
    return 0;
>>>>>>> e1d41945cc2e322a5b578272a44259b8e4e994ed
}
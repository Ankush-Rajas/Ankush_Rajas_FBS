// Accept the age and check if the person is:
// Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include <stdio.h>

int main()
{
    int age;

    printf("enter the age : \n");
    scanf("%d", &age);

    if (age >= 60)
    {
        printf("the person is senior");
    }
    else if (age >= 20 && age < 59)
    {
        printf("the person is adult");
    }
    else if (age > 12 && age < 19)
    {
        printf("the person is teenager");
    }
    else
    {
        printf("the person is child");
    }

    return 0;
}
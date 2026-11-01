// Ask the user to enter marks.
// Then show the result based on these rules:
// If marks are more than 75 → show "Genius"
// If marks are more than 65 → show "First Class"
// If marks are more than 55 → show "Second Class"
// If marks are 40 or more → show "Pass Class"
// If marks are less than 40 → show "Fail"

#include <stdio.h>

int main()
{
    int marks;
    printf("enter the marks\n");

    scanf("%d", &marks);

    if (marks > 75)
    {
        printf("student is genius");
    }
    else if (marks <= 74 && marks >= 65)
    {
        printf("First Class");
    }
    else if (marks <= 64 && marks >= 55)
    {
        printf("second class");
    }
    else if (marks <= 54 && marks >= 40)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

    return 0;
}

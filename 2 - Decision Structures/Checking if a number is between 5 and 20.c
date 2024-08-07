/* This algorithm gets a number and verifies if it's between 5 and 20, including them.*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Inform a number: ");
    scanf("%d",&num);

    if (num >= 5 && num <= 20)
    {
        printf("%d is between 5 and 20. ", num);
    }
    else
    {
        printf("%d is not between 5 e 20. ", num);
    }

    return 0;
}

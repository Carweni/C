/* This algorithm reads a password and verify if it is correct according to the one saved. If the number is correct,
it prints "Access allowed". Else, it prints "access denied". */

#include <stdio.h>

int main(void)
{
    int password;

    printf("Inform the password: ");
    scanf("%d",&password);

    if (password==12345)
    {
        printf("Access allowed. ");
    }
    else
    {
        printf("Access denied. ");
    }

    return 0;
}

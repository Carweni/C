/* This program reads an integer up to 3 digits, calculates and shows the reverse of the number with 3 digits.*/

#include <stdio.h>

int main(void)
{
    int num, pri, seg, terc, inv;

    printf("Informe an integer up to 3 digits: ");
    scanf("%d", &num);

    pri = num/100;
    seg = num%100/10;
    terc = num%10;

    inv = terc*100+seg*10+pri;

    printf("\nThe reversed number is: %d\n",inv);

    return 0;
}

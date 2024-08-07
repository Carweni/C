/*This program reads a number up to 5 digits, separates these digits and then, show them on different lines.*/

#include <stdio.h>

int main(void)
{
    int num, pri, sec, terc, quar, quin;

    printf("Inform a number up to 5 digits: ");
    scanf("%d",&num);

    pri = num/10000;
    sec = num%10000/1000;
    terc = num%1000/100;
    quar = num%100/10;
    quin = num%10;

    printf("%d is the first digit. \n",pri);
    printf("%d is the second digit. \n",sec);
    printf("%d is the third digit. \n",terc);
    printf("%d is the fourth digit. \n",quar);
    printf("%d is the fifth digit. \n",quin);

    return 0;
}

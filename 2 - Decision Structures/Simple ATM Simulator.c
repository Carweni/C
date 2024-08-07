/*This program is a simple ATM simulator. It asks the user for a withdrawal amount,
  and then it calculates and prints the number of each available denomination of notes
  (R$100, R$50, R$10, R$5, and R$1) required to fulfill the withdrawal*/

#include <stdio.h>

int main(void)
{
    int withdrawal, notes100, notes50, notes10, notes5, notes1;

    printf("Enter the withdrawal amount (between R$10,00 and R$600,00): R$ ");
    scanf("%d", &withdrawal);

    if (withdrawal < 10 || withdrawal > 600)
    {
        printf("Invalid amount. ");
    }
    else
    {
        notes100 = (int)(withdrawal / 100);
        notes50 = (int)(withdrawal - (notes100 * 100)) / 50;
        notes10 = (int)(withdrawal - (notes100 * 100) - (notes50 * 50)) / 10;
        notes5 = (int)(withdrawal - (notes100 * 100) - (notes50 * 50) - (notes10 * 10)) / 5;
        notes1 = (int)(withdrawal - (notes100 * 100) - (notes50 * 50) - (notes10 * 10) - (notes5 * 5)) / 1;

        printf("%d notes of R$100.00. \n", notes100);
        printf("%d notes of R$50.00. \n", notes50);
        printf("%d notes of R$10.00. \n", notes10);
        printf("%d notes of R$5.00. \n", notes5);
        printf("%d notes of R$1.00. \n", notes1);
    }

    return 0;
}

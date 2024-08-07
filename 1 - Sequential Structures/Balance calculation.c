/*This program gets the number and value of given installments, besides the number of them that were already paid, and informs how much
there is to be paid, and how much was already paid.*/

#include <stdio.h>

int main(void)
{
    int tot, pag;
    float fix, totPag, saldo;

    printf("Inform the number of installments: ");
    scanf("%d",&tot);
    printf("Inform the number of paid installments: ");
    scanf("%d",&pag);
    printf("Inform their value: $");
    scanf("%f",&fix);

    totPag = pag*fix;
    saldo = tot*fix-totPag;

    printf("Already paid value: $%.2f\n",totPag);
    printf("Value to be paid: $%.2f",saldo);

    return 0;
}

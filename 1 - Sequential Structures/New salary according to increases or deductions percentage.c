/*This program gets a salary value, its increase and deduction percentage and then, calculates the new salary.*/

#include <stdio.h>
#include<math.h>

int main(void)
{
    float sal, salAum, salLiq;
    int perAum, perDesc, dol, cent;

    printf("Inform the salary value: ");
    scanf("%f", &sal);
    printf("Inform the increase percentage(Ex: 10 for 10%): ");
    scanf("%d", &perAum);
    printf("Inform the deduction percentage(Ex: 5 for 5%): ");
    scanf("%d", &perDesc);

    salAum = sal + (sal*perAum/100);
    salLiq = salAum - (salAum*perDesc/100);

    printf("Increased salary:: %.2f\n", salAum);
    printf("Net salary: %.2f\n", salLiq);

    dol = (int)salLiq;
    cent = round((salLiq - dol)*100);

    printf("The liquid salary is of %d dollars and %d cents. ", dol, cent);

    return 0;
}

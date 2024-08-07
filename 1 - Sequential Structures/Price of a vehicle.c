/*The cost of a new automobile is the sum of its factory cost with the percentage of the distributor and the taxes over the factory cost.
This algorithm calculates the final price of the vehicle.*/

#include <stdio.h>

int main(void)
{
    float fab, dist, imp, tot;

    printf("Inform the factory cost of an automobile: R$ ");
    scanf("%f",&fab);
    printf("Inform the percentage of the distributor(0 a 100): ");
    scanf("%f",&dist);
    printf("Inform the tax percentage(0 a 100): ");
    scanf("%f",&imp);

    tot = fab + (fab*dist/100) + (fab*imp/100);

    printf("The final cost of the vehicle is: R$ %.2f",tot);

    return 0;
}

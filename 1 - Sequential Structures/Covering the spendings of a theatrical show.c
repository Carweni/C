/*This algorithm receives the cost of a theatrical show and its ticket's value. Then, it calculates and shows:
-The quantity of tickets that must be sold to cover the spending of the show;
-The quantity of tickets that must be sold for a 25% profit.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double cost, value;
    int cover, gain;

    printf("Inform the value of the show: ");
    scanf("%lf", &cost);
    printf("Inform the value of the ticket: ");
    scanf("%lf", &value);

    cover = ceil(cost / value);
    gain = ceil((cost*1.25)/value);

    printf("\nIn order to cover the spending of the show, it is necessary to sell %d tickets. \n", cover);
    printf("\nIn order to have a 25%% profit, it is necessary to sell %d tickets. \n", gain);

    return 0;
}

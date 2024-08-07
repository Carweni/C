/*A traveler wants to know how many times he had to fuel his car, how many liters of fuel were consumed and how many
are left after a trip between two cities. This program calculates and shows these informations if the distance
between the two cities, the tank capacity and the average consumption of the car are given*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float dist, max, av, abast, lit, litr;

    printf("Inform the distance(in km) between the two cities: ");
    scanf("%f",&dist);
    printf("Inform the maximum capacity(in L) of the vehicle's fuel tank: ");
    scanf("%f",&max);
    printf("Inform the average consumption(in km/L) of the vehicle: ");
    scanf("%f",&av);

    lit = dist/av;

    printf("\n%.2f liters of fuel were necessary for the ride. \n", lit);

    abast = ceil(lit/max);

    printf("It was necessary to fuel the vehicle %.0f times. \n",abast);

    litr = abast*max - lit;

    printf("There were %.2f liters of fuel left. \n",litr);

    return 0;
}

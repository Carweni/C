/* This algorithm receives a number of seconds and converts it to days, hours and minutes*/

#include <stdio.h>

int main(void)
{
    int segs;
    float days, hours, mins;

    printf("Inform a number of seconds: ");
    scanf("%d", &segs);

    days = (float)segs / 86400;
    hours = (float)segs / 3600;
    mins = (float)segs / 60;

    printf("\nThe conversion to minutes is: %.2f\n", mins);
    printf("The conversion to hours is: %.2f\n", hours);
    printf("The conversion to days is: %.2f\n", days);

    return 0;
}

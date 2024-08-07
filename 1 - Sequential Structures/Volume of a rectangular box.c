/*This algorithm calculates the volume of a rectangular box after receiving its height, length and width.*/

#include <stdio.h>

int main(void)
{
    float height, leng, wid, vol;

    printf("Inform the height(cm): ");
    scanf("%f",&height);
    printf("Inform the length(cm): ");
    scanf("%f",&leng);
    printf("Inform the width(cm): ");
    scanf("%f",&wid);

    vol = height*leng*wid;

    printf("The volume of the box is %.2f cm^3.",vol);

    return 0;
}

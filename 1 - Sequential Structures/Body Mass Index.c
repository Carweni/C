/*This algorithm measures one´s Body Mass Index(BMI).*/

#include <stdio.h>

int main(void)
{
    float weight, height, bmi;

    printf("Inform your weight(kg): ");
    scanf("%f",&weight);
    printf("Inform your height(m): ");
    scanf("%f",&height);

    bmi = weight/(height*height);

    printf("\nYour Body Mass Index(BMI) is: %.2f\n",bmi);

    return 0;
}

/* This algorithm reads the gender of a person (F or f for female, M or m for male. For any other character, it informs that it's invalid and
terminates the program). If a valid character is entered, it reads the person's height, calculates and displays their ideal weight using the
following formulas:
a) For men: (72.7 * h) - 58;
b) For women: (62.1 * h) - 44.7*/

#include <stdio.h>

int main(void){
    float height, idealWeightMale, idealWeightFemale;
    char gender;

    printf("Enter your gender(F / M): ");
    scanf(" %c", &gender);

    switch(gender)
    {
    case 'F':
    case 'f':
        printf("Enter your height(ex: 1.67): ");
        scanf("%f", &height);

        idealWeightFemale = (62.1 * height) - 44.7;

        printf("Ideal weight for your height: %.2f", idealWeightFemale);

        break;
    case 'M':
    case 'm':
        printf("Enter your height: ");
        scanf("%f", &height);

        idealWeightMale = (72.7 * height) - 58;

        printf("Ideal weight for your height: %.2f", idealWeightMale);

        break;
    default:
        printf("Invalid character.");
    }

    return 0;
}

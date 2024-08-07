/* This algorithm gets tree grades as the input and calculates the weighted average between then, considering the weights
1, 3 and 4, respectively. Then, it verifies if the student passed, flunked or if it can try a new test.*/

#include <stdio.h>

int main(void)
{
    int gr1, gr2, gr3, rec;
    float waverage, finalaverage;

    printf("Inform the first grade: ");
    scanf("%d",&gr1);
    printf("Inform the second grade: ");
    scanf("%d",&gr2);
    printf("Inform the third grade: ");
    scanf("%d",&gr3);

    waverage = (1*gr1 + 3*gr2 + 4*gr3) / 8.0;

    printf ("Average = %.1f\n", waverage);

    if (waverage >= 6 && waverage <= 10)
    {
        printf("Approved. ");
    }
    else if (waverage < 2)
    {
        printf("Flunked before recuperation exam. ");
    }
    else if (waverage >= 2 && waverage <= 5,9)
    {
        printf("There is the possibility of a recuperation exam. ");

        printf("\nInform the grade of the exam: ");
        scanf("%d",&rec);

        finalaverage = (waverage + rec)/2.0;

        printf("Average after the exam: %.1f\n", finalaverage);

        if (finalaverage >= 6)
        {
            printf("Approved after exam. ");
        }
        else
        {
            printf("Flunked after exam. ");
        }
    }

    return 0;
}

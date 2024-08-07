/*This program will ask the user for candidate information such as age, nationality, and whether they
have a college degree. It will then calculate and display the number of Brazilians and foreigners, the
 average age of Brazilians without a college degree, and the smallest age among foreigners with a college degree.
The program will continue to collect data until the user enters an age that is zero or negative.*/

#include <stdio.h>

int main(void)
{
    int age = 0, sumNoDegreeAge = 0, countBraz = 0, countForeigner = 0, countNoDegreeBraz = 0, smallestForeignerDegree = 9999;
    float averageNoDegreeBraz = 0;
    char nationality, degree;

    do
    {
        printf("Enter age: ");
        scanf("%d", &age);

        if (age > 0)
        {
            setbuf(stdin, NULL);
            printf("Enter nationality (B - Brazilian or F - Foreigner): ");
            scanf("%c", &nationality);

            // Counting Brazilians and foreigners
            if (nationality == 'B' || nationality == 'b')
            {
                countBraz++;
            }
            else if (nationality == 'F' || nationality == 'f')
            {
                countForeigner++;
            }

            setbuf(stdin, NULL);
            printf("Do you have a college degree? (Y - Yes or N - No): ");
            scanf("%c", &degree);
            printf("\n");

            // Counting age of Brazilians without a college degree
            if ((nationality == 'B' || nationality == 'b') && (degree == 'Y' || degree == 'y'))
            {
                countNoDegreeBraz++;
                sumNoDegreeAge += age;
            }
            // Finding the smallest age among foreigners with a college degree
            else if ((nationality == 'F' || nationality == 'f') && (degree == 'Y' || degree == 'y'))
            {
                if (age != 0 && smallestForeignerDegree > age)
                {
                    smallestForeignerDegree = age;
                }
            }
        }
    } while (age > 0);

    averageNoDegreeBraz = (float)sumNoDegreeAge / countNoDegreeBraz;

    printf("\nNumber of Brazilians: %d", countBraz);
    printf("\nNumber of foreigners: %d", countForeigner);

    if (countNoDegreeBraz == 0){
        printf("\nAverage age of Brazilians without a college degree: 0");
    }
    else{
        printf("\nAverage age of Brazilians without a college degree: %.1f", averageNoDegreeBraz);
    }

    if (smallestForeignerDegree == 9999){
        printf("\nSmallest age among foreigners with a college degree does not exist.");
    }
    else{
        printf("\nSmallest age among foreigners with a college degree: %d", smallestForeignerDegree);
    }

    return 0;
}

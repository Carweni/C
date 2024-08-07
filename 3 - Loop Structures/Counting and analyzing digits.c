/*This program prompts the user for an integer, counts the number of digits in
the input, and also counts how many of those digits are multiples of 2 and 3,
respectively. The final results are then displayed.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int num, digit, totalDigits = 0, countMultiplesOf2 = 0, countMultiplesOf3 = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number entered by the user: %d\n", num);

    while (num != 0) {
        totalDigits++;

        digit = num % 10;
        if (digit % 2 == 0) {
            countMultiplesOf2++;
        }

        if (digit % 3 == 0) {
            countMultiplesOf3++;
        }

        num = num / 10;
    }

    printf("Result reported by the program: %d digit(s)\n", totalDigits);
    printf("Number of digit(s) multiple(s) of 2: %d\n", countMultiplesOf2);
    printf("Number of digit(s) multiple(s) of 3: %d\n", countMultiplesOf3);

    return 0;
}

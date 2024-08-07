/* This program checks if a number is a rectangular number. A number is considered rectangular if it is the product of three
   consecutive natural numbers. For example, 120 is a rectangular number because 4 * 5 * 6 = 120.
   The program provides the following functionalities:
    a) Verify if a user-provided number is rectangular.
    b) Display all rectangular numbers within a specified interval.
*/

#include <stdio.h>

// Function to check if a number is rectangular
int isRectangular(int num) {
    int i = 1, product = 1;
    int numbers[3];

    // Initialize the first set of three consecutive numbers
    for (int j = 0; j < 3; j++) {
        numbers[j] = j;                       // Store 3 consecutive numbers.
        product = product * numbers[j];       // Multiply them.
    }

    // Loop to find if the product of three consecutive numbers equals the given number
    while (product < num) {                   // Repeat the process, incrementing the numbers until the product
                                              //is greater than, or equal, to the original number.
        product = 1;
        for (int j = 0; j < 3; j++) {
            numbers[j] = numbers[j] + 1;
            product = product * numbers[j];
        }
    }

    // Check if the product equals the given number
    if (product == num) {                     // If the product equals the original number, print the result.
        printf("%d is rectangular ==> %d * %d * %d = %d\n", num, numbers[0], numbers[1], numbers[2], product);
        return 1;
    }

    return 0;                                 // Otherwise, it's not rectangular and returns 0.
}

// Function to find and print rectangular numbers within a given range
void rectangularNumbersInInterval(int lowerLimit, int upperLimit) {
    int i;
    for (i = lowerLimit; i <= upperLimit; i++) {
        isRectangular(i);   // Call the function to print rectangular numbers within the interval.
    }
}

int main() {
    int option, input, lowerLimit, upperLimit, product;
    char repeat = 'y';
    do {
        // Display the menu options
        printf("\n1- Check if a number is rectangular");
        printf("\n2- Show rectangular numbers within an interval");
        printf("\nOption: ");
        fflush(stdin);
        scanf("%d", &option);

        // Option 1: Check if a specific number is rectangular
        if (option == 1) {
            printf("Enter a number: ");
            fflush(stdin);
            scanf("%d", &input);

            if (isRectangular(input) == 0) {
                printf("\n%d is not rectangular.", input);
            }
        }

        // Option 2: Find and display rectangular numbers within a given range
        if (option == 2) {
            printf("\nEnter the lower limit: ");
            fflush(stdin);
            scanf("%d", &lowerLimit);
            printf("Enter the upper limit: ");
            fflush(stdin);
            scanf("%d", &upperLimit);
            rectangularNumbersInInterval(lowerLimit, upperLimit);
        }

        // Ask the user if they want to repeat the program
        printf("\nDo you want to repeat the program (Y/y)? ");
        fflush(stdin);
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

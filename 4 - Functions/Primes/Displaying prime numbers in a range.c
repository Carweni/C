/*This code includes the "prime.h" header, and it provides a menu-driven program for checking if a
 number is prime, displaying prime numbers in a range, and calculating the average of prime numbers
 in another range.*/

#include <stdio.h>
#include "prime.h" 

int main(void) {
    int num, i, q, j, r, cont = 0, sum = 0, contM = 0;
    char resp, op;

    do {
        setbuf(stdin, NULL);
        printf("A - Check if a number is prime.\nB - Display prime numbers between 1 and 100.\nC - Calculate the average of prime numbers between 200 and 100. ");
        printf("\nChoose an option: ");
        scanf(" %c", &op); // Use a space before %c to consume any previous newline characters.

        switch (op) {
            case ('A'):
            case ('a'): {
                do {
                    setbuf(stdin, NULL);
                    printf("Enter a positive number: ");
                    scanf("%d", &num);
                } while (num < 0);

                if (is_prime(num) == 0) {
                    printf("%d is prime.\n", num);
                } else {
                    printf("%d is not prime.\n", num);
                }
                break;
            }
            case ('B'):
            case ('b'): {
                for (i = 2; i <= 100; i++) {
                    cont = 0;
                    for (q = 2; q <= (i / 2); q++) {
                        if (i % q == 0) {
                            cont = 1;
                            break;
                        }
                    }

                    if (cont == 0) {
                        printf("%d\t", i);
                    }
                }
                printf("\n");
                break;
            }
            case ('C'):
            case ('c'): {
                sum = 0;
                contM = 0;
                for (j = 200; j >= 100; j--) {
                    cont = 0;
                    for (r = 2; r < j; r++) {
                        if (j % r == 0) {
                            cont = 1;
                            break;
                        }
                    }
                    if (cont == 0) {
                        sum = sum + j;
                        contM++;
                    }
                }
                if (contM > 0) {
                    printf("The average of prime numbers between 200 and 100 is: %.2f\n", (float)sum/contM);
                } else {
                    printf("No prime numbers found in the specified range.\n");
                }
                break;
            }
            default: {
                printf("Invalid option.\n");
                break;
            }
        }

        do {
            setbuf(stdin, NULL);
            printf("\nDo you want to continue (S or N)? ");
            scanf(" %c", &resp); // Use a space before %c to consume any previous newline characters.
        } while (resp != 'S' && resp != 's' && resp != 'n' && resp != 'N');
    } while (resp == 'S' || resp == 's');

    return 0;
}

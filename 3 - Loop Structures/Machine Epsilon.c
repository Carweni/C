#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
   This program calculates the machine epsilon, which is the smallest positive number
   that, when added to 1.0, results in a value different from 1.0 using double precision.

   The algorithm starts from 1.0 and keeps dividing by 2 until the result added to 1.0
   is indistinguishable from 1.0. The last value that still made a difference is considered
   the machine epsilon.
*/

double find_machine_epsilon(void) {
    double epsilon = 1.0;

    while (1.0 + epsilon > 1.0) {
        epsilon /= 2;
    }

    return epsilon;
}

int main(void) {
    setlocale(LC_ALL, "C"); // Changed to "C" for consistent behavior across locales
    printf("The machine epsilon (precision limit of the computer) is approximately: %e\n", find_machine_epsilon() * 2);

    // Example results:
    // On my laptop: 1.084202e-19
    // On a friend's laptop: 2.220446e-16

    return 0;
}

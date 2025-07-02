#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define the function for which we want to find a root
float f(float x) {
    return exp(x) - 2*x - 2;
}

int main(void) {
    int max_iterations;
    float epsilon = 0.04;
    float a, b, root, fa, fb, fx, error;

    // Input interval [a, b]
    printf("Enter the lower limit of the interval: ");
    scanf("%f", &a);
    do {
        printf("Enter the upper limit of the interval: ");
        scanf("%f", &b);
    } while (a >= b);

    fa = f(a);
    fb = f(b);
    error = b - a;
    root = (a + b) / 2;
    fx = f(root);

    // Check if a root exists in the interval
    if (fa * fb > 0) {
        printf("\nThe function has no root in the given interval.\n");
        return 1;
    }

    // Estimate number of iterations needed
    max_iterations = ceil((log10(b - a) - log10(epsilon)) / log10(2));
    printf("\nEstimated number of iterations: %d\n", max_iterations);

    // Print table header
    printf("\na\t\tXm\t\tb\t\tf(a)\t\tf(Xm)\t\tf(b)\t\terror\n");
    printf("%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\n", a, root, b, fa, fx, fb, error);

    int i = 0;

    // Perform bisection iterations (currently only 2)
    while (i < 2) {
        if (fa * fx < 0) {
            b = root;
        } else {
            a = root;
        }

        root = (a + b) / 2;
        fa = f(a);
        fb = f(b);
        fx = f(root);
        error = b - a;

        printf("%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\n", a, root, b, fa, fx, fb, error);
        i++;
    }

    printf("\nThe approximate root of the function is: %.2f\n", root);

    return 0;
}

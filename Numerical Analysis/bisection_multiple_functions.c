#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function definitions for each option
float f(float x, int op) {
    switch (op) {
        case 1:
            return sqrt(x) - 5 * exp(-x);
        case 2:
            return x * log10(x) - 1;
        case 3:
            return 0.4 * x + 0.5 - cos(2 * x);
        case 4:
            return 0.4 * x + 0.5 - sin(2 * x);
        case 5:
            return exp(-(x * x)) - cos(x);
        case 6:
            return 4 * sin(x) - exp(x);
        default:
            return 0.0; // Fallback
    }
}

int main(void) {
    int op, n_iterations;
    float epsilon = 0.01;
    float a, b, root, fa, fb, fx, error;

    printf("Functions:\n");
    printf("1 - f(x) = sqrt(x) - 5 * e^(-x)\n");
    printf("2 - f(x) = x * log10(x) - 1\n");
    printf("3 - f(x) = 0.4x + 0.5 - cos(2x)\n");
    printf("4 - f(x) = 0.4x + 0.5 - sin(2x)\n");
    printf("5 - f(x) = e^(-x^2) - cos(x)\n");
    printf("6 - f(x) = 4 * sin(x) - e^x\n");
    printf("Choose one of the above (1 to 6): ");

    do {
        scanf("%d", &op);
        if (op < 1 || op > 6) {
            printf("Invalid option. Please choose between 1 and 6: ");
        }
    } while (op < 1 || op > 6);

    printf("\nEnter the lower bound of the interval: ");
    scanf("%f", &a);
    do {
        printf("Enter the upper bound of the interval: ");
        scanf("%f", &b);
    } while (a >= b);

    fa = f(a, op);
    fb = f(b, op);
    error = b - a;
    root = (a + b) / 2;
    fx = f(root, op);

    if (fa * fb > 0) {
        printf("\nThe function has no root in the provided interval.\n");
        return 1;
    }

    n_iterations = ceil((log10(b - a) - log10(epsilon)) / log10(2));
    printf("\nEstimated number of iterations: %d\n", n_iterations);

    printf("\na\t\tXm\t\tb\t\tf(a)\t\tf(Xm)\t\tf(b)\t\terror\n");
    printf("%.2f\t%.3f\t%.2f\t%.3f\t%.3f\t%.3f\t%.3f\n", a, root, b, fa, fx, fb, error);

    while (error > epsilon) {
        if (fa * fx < 0) {
            b = root;
        } else {
            a = root;
        }

        root = (a + b) / 2;
        fa = f(a, op);
        fb = f(b, op);
        fx = f(root, op);
        error = b - a;

        printf("%.2f\t%.3f\t%.2f\t%.3f\t%.3f\t%.3f\t%.3f\n", a, root, b, fa, fx, fb, error);
    }

    printf("\nThe approximate root of the function is: %.2f\n", root);

    return 0;
}

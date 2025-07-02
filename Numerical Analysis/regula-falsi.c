#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define the function whose root we want to find
float f(float x) {
    return exp(x) - 2 * x - 2;
}

int main(void) {
    float epsilon = 0.0001;
    float a, b, root, fa, fb, fx, error;

    // Input the interval
    printf("Enter the lower bound of the interval: ");
    scanf("%f", &a);
    do {
        printf("Enter the upper bound of the interval: ");
        scanf("%f", &b);
    } while (a >= b);

    fa = f(a);
    fb = f(b);

    // Check if a root exists in the interval
    if (fa * fb > 0) {
        printf("\nThe function has no root in the given interval.\n");
        return 1;
    }

    // Initial estimate using the false position formula
    root = (a * fb - b * fa) / (fb - fa);
    fx = f(root);
    error = fx;

    printf("\na\t\tXm\t\tb\t\tf(a)\t\tf(Xm)\t\tf(b)\t\terror\n");
    printf("%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\n", a, root, b, fa, fx, fb, error);

    int i = 0;
    while (i < 2) {  // You can increase this for more iterations
        if (fa * fx < 0) {
            b = root;
        } else {
            a = root;
        }

        fa = f(a);
        fb = f(b);
        root = (a * fb - b * fa) / (fb - fa); // Regula Falsi formula
        fx = f(root);
        error = fx;

        printf("%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\t%.7f\n", a, root, b, fa, fx, fb, error);

        if (fabs(fx) < epsilon) {
            break;
        }

        i++;
    }

    printf("\nThe approximate root of the function is: %.7f\n", root);

    return 0;
}

#include <stdio.h>
#include <math.h>

#define TOL 1e-6  // Tolerance for convergence

// Define the function
double func(double x) {
    return exp(x) - 2 * x - 2;
}

// Define the derivative of the function
double func_derivative(double x) {
    return exp(x) - 2;
}

int main() {
    double x0, x1, f0, f1, error;
    int iter;

    printf("Enter the initial guess (x0): ");
    scanf("%lf", &x0);

    f0 = func(x0);
    printf("Iteration 0 - x0: %.6lf, f(x0): %.6lf\n", x0, f0);

    for (iter = 1; iter <= 2; iter++) {
        x1 = x0 - func(x0) / func_derivative(x0);
        f1 = func(x1);

        error = fabs(x1 - x0); // Absolute error

        printf("Iteration %d - x%d: %.6lf, f(x%d): %.6lf, Error: %.6lf\n",
               iter, iter, x1, iter, f1, error);

        if (error < TOL) {
            printf("Convergence reached with error less than tolerance (%.0e).\n", TOL);
            break;
        }

        x0 = x1;
    }

    return 0;
}

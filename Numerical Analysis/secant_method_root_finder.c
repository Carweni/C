#include <stdio.h>
#include <math.h>

#define TOL 1e-6  // Tolerance for stopping condition

// Define the function
double func(double x) {
    return exp(x) - 2 * x - 2;
}

int main() {
    double x0, x1, x2, f0, f1, f2, error;
    int iter;

    printf("Enter the first initial guess (x0): ");
    scanf("%lf", &x0);

    printf("Enter the second initial guess (x1): ");
    scanf("%lf", &x1);

    f0 = func(x0);
    f1 = func(x1);

    printf("Iteration 0 - x0: %.6lf, f(x0): %.6lf\n", x0, f0);
    printf("Iteration 0 - x1: %.6lf, f(x1): %.6lf\n", x1, f1);

    for (iter = 1; iter <= 2; iter++) {
        if (fabs(f1 - f0) < 1e-12) {
            printf("Division by zero risk. The method cannot proceed.\n");
            return 1;
        }

        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);
        f2 = func(x2);
        error = fabs(x2 - x1);

        printf("Iteration %d - x%d: %.6lf, f(x%d): %.6lf, Error: %.6lf\n",
               iter, iter+1, x2, iter+1, f2, error);

        if (error < TOL) {
            printf("Convergence reached with error less than tolerance (%.0e).\n", TOL);
            break;
        }

        x0 = x1;
        x1 = x2;
        f0 = f1;
        f1 = f2;
    }

    return 0;
}

#include <stdio.h>

/* 
   This program calculates the INSS (Brazilian social security) contribution based on the following rules:
   a) For gross salaries up to three times the minimum wage, the INSS discount is 8%.
   b) For gross salaries above three times the minimum wage, the INSS discount is 10%.
   c) If the calculated contribution exceeds the value of the minimum wage, it is capped at the minimum wage amount.
   The program takes the minimum wage and gross salary as input, then calculates the INSS contribution and the net salary.
   Finally, it prints these values.
*/

int main(void)
{
    float minWage, grossSalary, inss, netSalary;

    printf("Enter the value of the minimum wage: $ ");
    scanf("%f", &minWage);
    printf("Enter your gross salary: $ ");
    scanf("%f", &grossSalary);

    if (grossSalary <= (3 * minWage))
    {
        inss = 0.08f * grossSalary;

        if (inss <= minWage)
        {
            printf("The INSS contribution is: $ %.2f\n", inss);
            netSalary = grossSalary - inss;
            printf("Your net salary is: $ %.2f\n", netSalary);
        }
        else
        {
            printf("The INSS contribution is: $ %.2f\n", minWage);
            netSalary = grossSalary - minWage;
            printf("Your net salary is: $ %.2f\n", netSalary);
        }
    }
    else
    {
        inss = 0.10f * grossSalary;

        if (inss <= minWage)
        {
            printf("The INSS contribution is: $ %.2f\n", inss);
            netSalary = grossSalary - inss;
            printf("Your net salary is: $ %.2f\n", netSalary);
        }
        else
        {
            printf("The INSS contribution is: $ %.2f\n", minWage);
            netSalary = grossSalary - minWage;
            printf("Your net salary is: $ %.2f\n", netSalary);
        }
    }

    return 0;
}

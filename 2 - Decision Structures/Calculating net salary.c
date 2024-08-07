// This program calculates the user's net salary, giving its base salary and a bonus, and checking which tax is applied.

#include <stdio.h>

int main(void){
    float baseSalary, bonus, netSalary, grossSalary, tax;

    printf("Enter your base salary: ");
    scanf("%f", &baseSalary);
    printf("Enter the bonus: ");
    scanf("%f", &bonus);

    grossSalary = baseSalary + bonus;

    // Check if gross salary is less than 1000:
    if (grossSalary < 1000)
    {
       // Calculate tax as 15% of gross salary:
       tax = grossSalary * (15.0 / 100);

       // Calculate net salary by subtracting tax from gross salary:
       netSalary = grossSalary - tax;

       // Display net salary to the user:
       printf("Your net salary is: %.2f", netSalary);
    }
    else
    {
       // Calculate tax as 20% of gross salary:
       tax = grossSalary * (20.0 / 100);

       // Calculate net salary by subtracting tax from gross salary:
       netSalary = grossSalary - tax;

       // Display net salary to the user:
       printf("Your net salary is: %.2f", netSalary);
    }

    return 0;
}

// This program receives the salary and position code of an employee, then calculates and displays the increase
// and new salary based on the provided information.

#include <stdio.h>

int main(void)
{
    float salary, increase, newSalary;
    int code;

    printf("Code:   Position:           Percentage: \n");
    printf("1       Clerk               50%% \n");
    printf("2       Secretary           35%% \n");
    printf("3       Cashier             20%% \n");
    printf("4       Manager             10%% \n");
    printf("5       Director            No increase \n");

    printf("\nEnter the employee's salary: $");
    scanf("%f", &salary);

    printf("Enter the employee's position (1, 2, 3, 4, or 5): ");
    scanf("%d", &code);

    switch (code)
    {
    case 1:
        increase = salary * 0.5;
        newSalary = salary + increase;
        printf("\nThe position is Clerk. \nThe increase amount is: $%.2f. \nThe new salary is: $%.2f", increase, newSalary);
        break;
    case 2:
        increase = salary * 0.35;
        newSalary = salary + increase;
        printf("\nThe position is Secretary. \nThe increase amount is: $%.2f. \nThe new salary is: $%.2f", increase, newSalary);
        break;
    case 3:
        increase = salary * 0.2;
        newSalary = salary + increase;
        printf("\nThe position is Cashier. \nThe increase amount is: $%.2f. \nThe new salary is: $%.2f", increase, newSalary);
        break;
    case 4:
        increase = salary * 0.1;
        newSalary = salary + increase;
        printf("\nThe position is Manager. \nThe increase amount is: $%.2f. \nThe new salary is: $%.2f", increase, newSalary);
        break;
    case 5:
        printf("\nThe position is Director. \nDirectors will not receive an increase. ");
        break;
    default:
        printf("Invalid code. ");
        break;
    }
    return 0;
}

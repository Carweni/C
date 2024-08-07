/*In this program, users are prompted to input their salary and then choose from two options:
 to calculate and display tax based on salary ranges or to calculate and display salary increases
 based on salary ranges. The program employs a switch statement to determine which option the user
 selects and then performs the corresponding calculations and output. If the user selects an invalid
 option, the program provides a message indicating so.*/

 #include <stdio.h>

int main(void)
{
    float sal, imp, salInc;
    int opcao;

    printf("Enter your salary: $");
    scanf("%f", &sal);

    printf("Menu of options:\n1 - Tax\n2 - New salary\nEnter the desired option: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            if (sal < 1000)
            {
                imp = sal * 0.05;

                printf("The tax amount is $%.2f", imp);
                break;
            }
            else if (sal >= 1000 && sal <= 1500)
            {
                imp = sal * 0.1;

                printf("The tax amount is $%.2f", imp);
                break;
            }
            else
            {
                imp = sal * 0.15;

                printf("The tax amount is $%.2f", imp);
                break;
            }
        case 2:
            if (sal < 1000)
            {
                printf("Salary increase: $75.00");

                salInc = sal + 75;

                printf("\nThe increased salary amount is $%.2f", salInc);
                break;
            }
            if (sal >= 1000 && sal <= 1500)
            {
                printf("Salary increase: $100.00");

                salInc = sal + 100;

                printf("\nThe increased salary amount is $%.2f", salInc);
                break;
            }
            else
            {
                printf("Salary increase: $150.00");

                salInc = sal + 150;

                printf("\nThe increased salary amount is $%.2f", salInc);
                break;
            }
        default:
        {
            printf("Invalid character. ");
        }
    }

    return 0;
}

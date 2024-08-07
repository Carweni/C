/*This algorhithm reads two numbers that represent the limits of an interval and reads the increment. Then, it displays the numbers
in that interval according to the specified increment and in ascending order. The user can enter the values representing the interval
limits in either ascending or descending order. Then, it calculates the average of the odd numbers that are divisible by 35 within
the interval.*/

#include<stdio.h>

int main(void){
    int start, end, increment, i = 0, count = 0, sum = 0;
    float average=0;
    char option;

    do
    {
        printf("Enter the starting value of the interval: ");
        scanf("%d",&start);
        printf("Enter the ending value of the interval: ");
        scanf("%d",&end);
        printf("Enter the increment: ");
        scanf("%d",&increment);

        // Reversed limit:
        if(end < start)
        {
            for(i = end; i <= start; i = i + increment)
            {
                if (i % 2 == 1 && i % 35 == 0)
                {
                    printf("%d\tOdd and divisible by 35.\n", i);
                    count++;
                    sum += i;
                }
                else
                {
                    printf("%d\n",i);
                }
            }
        }

        // Limit in the correct order:
        else
        {
            for(i = start; i <= end; i = i + increment)
            {
                if (i % 2 == 1 && i % 35 == 0)
                {
                    printf("%d\tOdd and divisible by 35.\n", i);
                    count++;
                    sum += i;
                }
                else
                {
                    printf("%d\n",i);
                }
            }
        }

        if(count != 0){
            average = (float)sum / count;
            printf("The average of the odd numbers divisible by 35 is: %.2f", average);
        }

        printf("\nDo you want to repeat the program execution (Y/N)? ");
        setbuf(stdin, NULL);
        scanf("%c",&option);
    }
    while (option == 'Y' || option == 'y');

    return 0;
}

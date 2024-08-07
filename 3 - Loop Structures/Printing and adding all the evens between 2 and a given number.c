/* This program's imput is a number bigger than 2. Then, it prints all the even numbers between 2 and the given number and their sum */

#include<stdio.h>

int main(void)
{
    int num, i, sum=0, cont=0;

    do
    {
        printf("Inform a number bigger than 2: ");
        scanf("%d", &num);

        if (num <= 2)
        {
            printf("Invalid value. \n");
        }
    }
    while(num <= 2);

    for(i = 2; i <= num; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t", i);
            sum = sum + i;
            cont++;
        }

    }

    printf("\nSum of the evens: %d", sum);

   return 0;
}

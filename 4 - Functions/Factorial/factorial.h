#define factorial_H

void factorial(int x)
{
    int i;

    printf("%d! ",x);

    for(i = x; i >= 2; i--)
    {
        printf("%d * ",i);
    }
    printf("1 = ");
}

void displayResult(int x)
{
    int i, fat=1;

    for(i = 2; i <= x; i++)
    {
        fat = fat*i;
    }

    printf("%d\n",fat);
}

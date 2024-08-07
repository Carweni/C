#define divisors_h

int numberOfDivisors(int x)
{
    int i, cont=0;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cont++;
        }
    }

    return cont;
}

void displayDivisors(int x)
{
    int i;

    for(i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            printf(" %d ",i);
        }
    }
}

void quantityAndSumWithinRange(int x, int y)
{
    int i, q, cont=1, sum=0;

    for(i = x; i <= y; i++)
    {
         printf("%d - ",i);
         cont = 0;
         sum = 0;
         for(q = 1; q <= i; q++)
         {
             if(i % q == 0)
             {
                 printf(" %d ",q);
                 sum += q;
                 cont++;
             }
         }

         printf("==> Quantity: %d => Sum: %d\n",cont, sum);
    }
}

int greatestCommonDivisor(int x, int y)
{
    int i, q, maxDiv = 1;

    for (i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            for (q = 1; q <= y; q++)
            {
                if (y % q == 0 && q == i && q > maxDiv)
                {
                    maxDiv = q;
                }
            }
        }
    }

    return maxDiv;
}

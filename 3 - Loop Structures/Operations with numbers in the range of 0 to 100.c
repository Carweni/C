/* In a range from 0 to 100, this program presents in separate lists:
   a) Numbers divisible by 3.
   b) The square of numbers divisible by 3.
   c) Numbers divisible by 5 or 7.
   d) The square root of numbers divisible by 5 or 7.*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int i, r;
    float s;

    printf("== DIVISIBLE BY 3 ==\n");

    for(i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n== SQUARE OF NUMBERS DIVISIBLE BY 3 ==\n");

    for(i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            r = i * i;
            printf("%d\t", r);
        }
    }

    printf("\n ==DIVISIBLE BY 5 OR 7== \n");

    for(i = 0; i <= 100; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n== SQUARE ROOT OF NUMBERS DIVISIBLE BY 5 OR 7== \n");

    for(i = 0; i <= 100; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            s = sqrt(i);
            printf("%.2f\t", s);
        }
    }

    return 0;
}

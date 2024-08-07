/*This program calculates the value of the mathematical constant e (Euler´s Number) using the summation 
of the first 15 terms of its infinite series.*/

#include <stdio.h>

int main (void){
    int i, x, y;
    float e = 1.0;

    for(i = 1; i <= 15; i++){
        x = i;
        y = 1;

        while(x > 0){
            y = y * x;
            x--;
        }

        e = e + (1.0 / y);
        printf("%d: %f\n", i, e);
    }

    return 0;
}

/*The code calculates the square root of a positive integer using an iterative method:

 1)It prompts the user to input an integer (x).
 2)It enters a loop that continues until the value of x becomes less than or equal to 0.
 3)Inside the loop, the code subtracts the value of add from x and increments the value of add by 2. This simulates the process
 of calculating the square root by repeatedly subtracting consecutive odd numbers.
 4)At the same time, the variable count keeps track of how many iterations have been performed, which represents an approximation
 of the square root.
 5)After the loop exits, the code checks whether the value of x is exactly 0. If it is, it indicates that the calculated square root
 is exact and prints the value of count as the square root. If the value of x is not exactly 0, it means the loop exited because the
 square root couldn't be calculated exactly. In this case, the code prints the value of count as an approximation of the square root.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, add = 1, count = 0;;

    printf("Inform an integer: ");
    scanf("%d", &x);

    while(x > 0){
        x -= add;
        add += 2;
        count ++;
    }

    if (x == 0){
        printf("\nExact square root: %d\n", count);
    }
    else{
        printf("\nApproximated square root: %d\n", count);
    }

    return 0;
}

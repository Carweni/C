/*
 * This program takes a string input from the user and converts it into two forms:
 * uppercase and lowercase. It then prints both versions of the string.
 */

#include <stdio.h>

int main(void)
{
    char string[50], upper[50], lower[50];
    int i = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin); // Get input string from the user

    // Convert to uppercase and lowercase
    while(string[i] != '\0')
    {
        if(string[i] >= 'a' && string[i] <= 'z') // Check if the character is lowercase
        {
            upper[i] = string[i] - 32; // Convert to uppercase
            lower[i] = string[i];      // Keep as lowercase
        }
        else if(string[i] >= 'A' && string[i] <= 'Z') // Check if the character is uppercase
        {
            upper[i] = string[i];      // Keep as uppercase
            lower[i] = string[i] + 32; // Convert to lowercase
        }
        else
        {
            upper[i] = string[i];      // Keep the character unchanged
            lower[i] = string[i];      // Keep the character unchanged
        }

        i++;
    }

    upper[i] = '\0';
    lower[i] = '\0';

    printf("Uppercase string: %s\n", upper);
    printf("Lowercase string: %s\n", lower);

    return 0;
}

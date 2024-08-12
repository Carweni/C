/*
 * This program reads a string of up to 50 characters and prints the text vertically, one word per line.
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char resp, text[51];
    int i = 0;

    do
    {
        setbuf(stdin, NULL);
        printf("Enter a text with up to 50 characters: ");
        gets(text);

        printf("\n==== The Text, But Vertically ====\n");

        i = 0;
        while (text[i] != '\0')
        {
            if (text[i] != 32) // If the character is not a space
            {
                printf("%c", text[i]); // Print the character
            }
            else if (text[i] == 32 && text[i + 1] != 32 && text[i + 1] != '\0') // If it is a space followed by a non-space or end of string
            {
                printf("\n"); // Move to the next line
            }
            i++;
        }

        setbuf(stdin, NULL);
        printf("\n\nDo you want to continue with the program (Y/y)? ");
        scanf("%c", &resp);
        resp = toupper(resp);
        printf("\n");
    } while (resp == 'Y');

    return 0;
}

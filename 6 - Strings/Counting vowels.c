/*
 * This program reads a string and counts the number of each vowel (a, e, i, o, u) present in the string.
 * After counting, the program displays the quantity of each vowel. 
 */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
    char answer, string[101];
    int vetVow[5], i = 0;

    do
    {
        setbuf(stdin, NULL);
        printf("Enter a text with up to 100 characters: ");
        fgets(string, sizeof(string), stdin);

        for(i = 0; i < 5; i++)
        {
            vetVow[i] = 0;
        }

        i = 0;
        while(string[i] != '\0')
        {
            if(string[i] == 'a' || string[i] == 'A')
            {
                vetVow[0]++;
            }
            else if(string[i] == 'e' || string[i] == 'E')
            {
                vetVow[1]++;
            }
            else if(string[i] == 'i' || string[i] == 'I')
            {
                vetVow[2]++;
            }
            else if(string[i] == 'o' || string[i] == 'O')
            {
                vetVow[3]++;
            }
            else if(string[i] == 'u' || string[i] == 'U')
            {
                vetVow[4]++;
            }
            i++;
        }

        printf("VOWEL\tQUANTITY\n=================\n");
        printf("A/a\t%d\n", vetVow[0]);
        printf("E/e\t%d\n", vetVow[1]);
        printf("I/i\t%d\n", vetVow[2]);
        printf("O/o\t%d\n", vetVow[3]);
        printf("U/u\t%d\n", vetVow[4]);

        setbuf(stdin, NULL);
        printf("\n\nDo you want to continue with the program (Y/y)? ");
        scanf("%c", &answer);
        answer = toupper(answer);
        printf("\n");
    }
    while(answer == 'Y');

    return 0;
}

/*This program takes a character input from the user, converts it to uppercase using toupper(),
  and then checks whether the character belongs to the alphabet. If it does, the program determines
  if the character is a vowel or a consonant. */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    

    ch = toupper(ch);
    printf("Character entered in uppercase: %c\n", ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The entered character belongs to the alphabet.\n");

        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("VOWEL %c\n", ch);
            break;
        default:
            printf("CONSONANT %c\n", ch);
            break;
        }
    }
    else
    {
        printf("The entered character does not belong to the alphabet.\n");
    }

    return 0;
}

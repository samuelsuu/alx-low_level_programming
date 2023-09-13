#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times followed by a newline
 *
 * Description: This function prints the lowercase alphabet ten times, each time
 * followed by a newline character, using the _putchar function.
 */
void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
    }
}

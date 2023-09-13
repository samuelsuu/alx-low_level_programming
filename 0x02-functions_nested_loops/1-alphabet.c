#include <stdio.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}

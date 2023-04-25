#include "main.h"
/**
 *Description -Prints the alphabet in lowercase.
 *
 *Return:0 to indicate successful execution
 */
void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        _putchar(c);
        c++;
    }
    _putchar('\n');
    return (0);
}

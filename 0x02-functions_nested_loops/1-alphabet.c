#include "main.h"

/**
 *print_alphabet - Prints alphabet
 *Return: Void
 */

void print_alphabet(void)
{
char character = 'a';

while (character <= 'z')
{
_putchar(character);
character++;
}
_putchar('\n');
}

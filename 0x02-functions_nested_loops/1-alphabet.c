#include <unistd.h>

/**
 *print_alphabet - Prints alphabet
 *Return: 0 on sucess
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
return (0);
}

#include "main.h"

/**
 *print_alphabet_x10 - Prints alphabet ten times
 *Return: Void
 */

void print_alphabet_x10(void)
{
char letter = 'a';
int count = 0;

while (count <= 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
count++;
}
}

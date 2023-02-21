#include "main.h"

/**
 * main - Main function here
 * Return: Always 0 when successful
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

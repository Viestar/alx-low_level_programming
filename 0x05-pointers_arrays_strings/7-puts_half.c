#include "main.h"

/**
* puts_half - prints half the character
* @str: A string pointer whose value to be printed.
* Return: Void
*/

void puts_half(char *str)
{
int index;

for (index = 0; str[index] != '\0'; index++)
index++;
for (index /= 2; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}

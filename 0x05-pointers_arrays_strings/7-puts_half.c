#include "main.h"

/**
* puts_half - prints half the character
* @str: A string pointer whose value to be printed.
* Return: Void
*/

void puts_half(char *str)
{
int index = 0;
int i, half;

while (str[index] != '\0')
{
index++;
}
if (index % 2 == 1)
	half = (index - 1) / 2;
half = index / 2;
for (i = half; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
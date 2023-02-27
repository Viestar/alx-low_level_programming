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
half = index / 2;
for (i = half; i <= index; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
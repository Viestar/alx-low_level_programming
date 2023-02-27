#include "main.h"

/**
* puts2 - prints every other character
* @str: A string pointer whose value to be printed.
* Return: Void
*/

void puts2(char *str)
{
int index = 0;

while (str[index])
{
_putchar(str[index]);
index = index + 2;
}
_putchar('\n');
}

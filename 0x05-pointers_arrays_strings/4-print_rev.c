#include "main.h"


/**
* print_rev - Prints a given string
* @s: A string pointer whose value to be printed.
* Return: Void
*/

void print_rev(char *s)
{
int index = 0;
int i;

while (s[index])
{
index++;
}
for (i = index; i > 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');

}


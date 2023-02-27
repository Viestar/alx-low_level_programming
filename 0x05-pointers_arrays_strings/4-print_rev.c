#include "main.h"


/**
* print_rev - Prints a given string
* @s: A string pointer whose value to be printed.
* Return: Void
*/

void print_rev(char *s)
{
int index = 0;

while (s[index])
{
index++;
}
while (index--)
{
_putchar(s[index]);
}
_putchar('\n');

}


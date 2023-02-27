#include "main.h"


/**
* _puts - Prints a given string
* @str: A string pointer whose value to be printed.
* Return: Void
*/

void _puts(char *str)
{
int index = 0;

while(str[index])
{
_putchar(str[index]);
index++;
}
_putchar('\n');

}


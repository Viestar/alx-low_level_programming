#include <stdio.h>

/**
 * main - Displays both lower and upper case followed by a line
 * Return: 0 when successfully executed.
 */

int main(void)
{
char lcase;
char ucase;
for (lcase = 'a'; lcase <= 'z'; lcase++)
{
putchar(lcase);
lcase++;
}
for (ucase = 'A'; ucase <= 'Z'; ucase++)
{
putchar(ucase);
ucase++;
}
putchar('\n');
return (0);
}

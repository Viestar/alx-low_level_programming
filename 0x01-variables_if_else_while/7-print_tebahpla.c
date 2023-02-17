#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints an alphabet in a reverse order.
 * Return: 0 when successfully executed
 */

int main(void)
{
char lcase = 'z';

while (lcase >= 'a')
{
putchar(lcase);
lcase--;
}
putchar('\n');
return (0);
}

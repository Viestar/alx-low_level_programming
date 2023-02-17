#include <stdio.h>

/**
 * main - prints out the alphabet except e and q
 * Return: 0 when successfully executed
*/
int main(void)
{
char lcase;
char q = 'q';
char e = 'e';
for (lcase = 'a'; lcase <= 'z'; lcase++)
{
if (lcase != q && lcase != e)
putchar(lcase);
}
putchar('\n');
return (0);
}

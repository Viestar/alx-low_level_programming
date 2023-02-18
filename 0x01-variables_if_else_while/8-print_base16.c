#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * Return: 0 when successful
 */

int main(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
printf("%c", i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

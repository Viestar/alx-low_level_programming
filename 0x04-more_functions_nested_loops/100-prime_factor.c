#include <stdio.h>

/**
 * main - prints  prime numbers
 * Return: 0 for success
 */

int main(void)
{
long x = 612852475143;
long y = 2;
long z = 0;

while (x != 1)
{
if (x % y == 0)
{
x = x / y;
z = y;
}
y += 1;
}
printf("%ld\n", z);
return (0);
}

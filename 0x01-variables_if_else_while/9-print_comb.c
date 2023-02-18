#include <stdio.h>

/**
 * main - prints all single digit combinations.
 * Return:: 0 when successful
*/

int main(void)
{
int num = 0;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

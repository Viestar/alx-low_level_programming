#include <stdio.h>

/**
 * main - prints smallest three digit combinations.
 * Return:: 0 when successful
*/

int main(void)
{
int num_1;
int num_3;
int num_2;
for (num_1 = '0'; num_1 <= '9'; num_1++)
{
for (num_2 = '0'; num_2 <= '9'; num_2++)
{
for (num_3 = '0'; num_3 <= '9'; num_3++)
{
if (num_1 < num_2 && num_2 < num_3)
{
putchar(num_1);
putchar(num_2);
putchar(num_3);
if (num_1 != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

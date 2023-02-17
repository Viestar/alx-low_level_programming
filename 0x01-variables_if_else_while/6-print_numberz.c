#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * Return:: 0 when successful
*/

int main(void)
{
int num = 0;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}

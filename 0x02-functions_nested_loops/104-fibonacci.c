#include <stdio.h>

/**
 *main - Outputs the first 98 fibonacci numbers.
 *Return: 0 for Success
 */

int main(void)
unsigned long int a, b, c, bb, bbb, cc, cc;
b = 1;
c = 2;

printf("%lu", b);
for (a = 1; a < 91; a++)
{
printf(", %lu", c);
c = c + b;
b = c - b;
}
bb = b / 1000000000;
bbb = b % 1000000000;
cc = c / 1000000000;
ccc = c % 1000000000;
for (a = 92; a < 99; ++a)
{
printf(", %lu", cc + (ccc / 1000000000));
printf("%lu", ccc % 1000000000);
cc = cc + bb;
bb = cc - bb;
cc = ccc + bbb;
bb = ccc - bbb;
}
printf("\n");
return (0);
}

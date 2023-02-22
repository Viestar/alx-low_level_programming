#include <stdio.h>

/**
 *main - Outputs the first 50 fibonacci numbers.
 *Retur: Void
 */

int main(void)
{
int n 1;
long a = 1;
long b = 2;

while (n <= 50)
{
if (n == 1)
printf("%ld", a);
else if (n == 2)
printf(", %ld", b);
else
{
b += a;
a = b - a;
printf(", %ld", b);
}
++n;
}
printf("\n");
return (0);
}

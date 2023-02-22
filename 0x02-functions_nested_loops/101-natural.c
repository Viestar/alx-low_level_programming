#include <stdio.h>

/**
 *main - Outputs the sum of multiples of 3 and 5 to 1024(excluded)
 *Return: 0 for success
 */

int main(void)
{
int n, sum = 0;

while (n < 1024)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum += n;
}
n++;
}
printf("%d\n", sum);
return (0);
}

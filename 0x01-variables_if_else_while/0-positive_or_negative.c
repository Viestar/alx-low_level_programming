#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Checks the sign of a randomly generated number
* Return: - 0 when successfully executed
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

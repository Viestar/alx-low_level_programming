#include "main.h"

/**
 *_abs- -- absolute value of an intger
 *@n: Argument to be passed
 *Return: 1 when n>0, -n when n<0 or just n
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-n);
}
return (n);
}

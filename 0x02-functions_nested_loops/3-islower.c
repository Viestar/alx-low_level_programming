#include "main.h"


/**
 *_islower -- Check whether an argument passed is lower
 *@c: the argument received
 *Return: 1 when when lower and 0 otherwise 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

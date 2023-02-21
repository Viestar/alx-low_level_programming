#include <stdio.h>

/**
 *_isalpha -- Check whether an argument passed is an alphabet.
 *@c: Argument to be passed
 *Return: 1 when when lower and 0 otherwise 0
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

#include <unistd.h>
#include <stdio.h>


/**
 *_isalpha -- Check whether an argument passed is an alphabet.
 *Return: 1 when when lower and 0 otherwise 0
 */

int _isalpha(int c)
{
if (islower(c) || isupper(c))
{
return (1);
}
else
{
return (0);
}
}

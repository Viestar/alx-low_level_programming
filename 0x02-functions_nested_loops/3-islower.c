#include "main.h"


/**
 *_islower -- Check whether an argument passed is lower
 *@c: the argument received
 *Return: 1 when when lower and 0 otherwise 0
 */

int _islower(int c)
{
int lchar = 'a';

for (lchar = 'a'; lcahr <= 'z'; lcahr++)
{
if (c == lchar)
{
return (1);
}
}
return (0);
}

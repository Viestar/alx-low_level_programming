#include <unistd.h>
#include <stdio.h>


/**
 *_islower -- Check whether an argument passed is lower
 *Return: 1 when when lower and 0 otherwise 0
 */

int _islower(int c)
{
  if (islower(c))
    {
return (1);

    }
  else
    {
return (0);
}
}

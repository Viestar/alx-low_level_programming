#include "main.h"


/**
* _strlen - Returns the length of a given string
* @s: A string whose length to be returned.
* Return: integer
*/

int _strlen(char *s)
{
int len = 0;

while (s[len])
{
len++;
}
return (len);
}

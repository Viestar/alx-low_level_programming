#include "main.h"

/**
 * *_strcmp - concatenates two strings to a given number characters
 * @s1: first string to be compared
 * @s2: second string to be compared..
 * Return: Positive for true or negative integer for False
 */


int _strcmp(char *s1, char *s2)
{
int result = 0;

while ((*s1 && *s2) && (*s1 == *s2))
{
s2++;
s1++;
}

result = *s1 - *s2;

return (result);
}

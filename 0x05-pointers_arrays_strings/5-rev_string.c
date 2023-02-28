#include "main.h"


/**
* rev_string - reverses a given string
* @s: A string pointer whose value to be reversed.
* Return: Void
*/

void rev_string(char *s)
{
int len = 0, count = 0;
char temp;

while (*s)
{
count++; /* find length of the string */
s++;
}
for (len = 0; len < count; len++)
s--;
for (len = 0; len < (count / 2); len++)
{
int index = count;
temp = s[index - len - 1];
s[index - len - 1] = s[len];
s[len] = temp;
}
}

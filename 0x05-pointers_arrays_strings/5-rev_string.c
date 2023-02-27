#include "main.h"


/**
* rev_string - reverses a given string
* @s: A string pointer whose value to be reversed.
* Return: Void
*/

void rev_string(char *s)
{
int len = 0;
int index;
char temp;

while (s[len])
len++;
for (index = 0; index <= (len / 2); index++)
{
temp = s[index];
s[index]  = s[len - index - 1];
s[len - index - 1] = temp;

}
}

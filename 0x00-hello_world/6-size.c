#include <stdio.h>

/**
* main - Program entry
* Return: 0 for success and 1 for error
*/

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}

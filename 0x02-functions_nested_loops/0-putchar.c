#include "main.h"

/**
 * main - Main function here
 * Return: Always 0 when successful
 */

int main(void)
{
char word[] = "_putchar\n";
int i;

for (i = 0; word[i] != '\0'; i++)
{
_putchar(word[i]);
}
return (0);
}

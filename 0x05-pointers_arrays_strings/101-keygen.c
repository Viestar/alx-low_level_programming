#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random passwords
 * Return:  0 for success
 */

int main(void)
{
int numbers;
char key;

srand(time(NULL));
while (numbers < 2646)
{
key = rand() % 128;
numbers += key;
putchar(key);
}
putchar(17870 - numbers);
return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random passwords
 * Return:  0 for success
 */


int main(void)
{
int num_sum;
char key;

srand(time(NULL));
while (num_sum <= 2645)
{
key = rand() % 128;
num_sum += key;
putchar(key);
}
putchar(2772 - num_sum);
return (0);
}

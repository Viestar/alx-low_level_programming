#include <stdio.h>

/**
 * main - whatever
 */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(5 + p) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}

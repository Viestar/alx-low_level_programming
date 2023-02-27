#include "main.h"


/**
* swap_int - Swaps two vallues of two variable
* @a: First variable to be swapped.
* @b: Second variable to be swapped
* Return: Void
*/

void swap_int(int *a, int *b)
{
int x = *a;
int y = *b;

*a = y;
*b = x;
}

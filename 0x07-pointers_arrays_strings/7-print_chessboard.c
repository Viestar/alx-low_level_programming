#include "main.h"

/**
 * print_chessboard - Displays chessboard.
 * @a: Board - 2D Array.
 */

void print_chessboard(char (*a)[8])
{
	int count_one, count_two;

	for (count_one = 0; a[count_one][7]; count_one++)
	{
		for (count_two = 0; count_two < 8; count_two++)
		{
			_putchar(a[count_one][count_two]);
		}
		_putchar('\n');
	}
}

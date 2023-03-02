#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: Buffer to be printed.
 * @size: Bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int count;
	int byte_size;

	for (byte_size = 0; byte_size < size; byte_size += 10)
	{	printf("%08x: ", byte_size);
		for (count = 0; count < 10; count++)
		{
			if ((count + byte_size) >= size)
				printf("  ");
			else
				printf("%02x", *(b + count + byte_size));
			if ((count % 2) != 0 && count != 0)
				printf(" "); }
		for (count = 0; count < 10; count++)
		{
			if ((count + byte_size) >= size)
				break;
			else if (*(b + count + byte_size) >= 31 &&
				 *(b + count + byte_size) <= 126)
				printf("%c", *(b + count + byte_size));
			else
				printf("."); }
		if (byte_size >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}

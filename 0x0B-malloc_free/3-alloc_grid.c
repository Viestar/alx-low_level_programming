#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array.
 * @width: width.
 * @height: height.
 * Return: 2D array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **array_array; /* string container the 2D array */
	int first_dimension, second_dimension;

	/*Checking for O length */
	if (width < 1 || height < 1)
		return (NULL);

	/* Allocating memory to the first 1D of the array */
	array_array = malloc(sizeof(int *) * height);

	if (array_array == NULL)
		return (NULL);
	/* We loop through the 1D array to populate each index with another array */
	for (first_dimension = 0; first_dimension < height; first_dimension++)
	{
		/* Allocating memory to the second dimension */
		array_array[first_dimension] = malloc(sizeof(int) * width);

		if (array_array[first_dimension] == NULL)
		{
			for (; first_dimension >= 0; first_dimension--)
				free(array_array[first_dimension]);

			free(array_array);
			return (NULL);
		}
	}
	/*Initialising the 2D array with a nested loop */
	for (first_dimension = 0; first_dimension < height; first_dimension++)
	{
		for (second_dimension = 0; second_dimension < width; second_dimension++)
			array_array[first_dimension][second_dimension] = 0;
	}

	return (array_array);
}

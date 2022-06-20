#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a grid of given size
 * @width: size input
 * @height: size input
 *
 * Return: 2 deminsional array of intergers
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr[x] = (int *)malloc(sizeof(int) * width);
			if (ptr[x] == NULL)
			{
				for (x = x; x >= 0; x--)
					free(ptr[x]);
				free(ptr);
				return (NULL);
			}
	for (y = 0; y < width; y++)
		ptr[x][y] = 0;
	}
	return (ptr);
}

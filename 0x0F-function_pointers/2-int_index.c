#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - search for an interger.
 * @array: input array.
 * @size: size fo array.
 * @cmp: function pointer.
 *
 * Return: index of array wher einterger is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

#include "holberton.h"

/**
 * reverse_array - reverse an array of intergers
 * @a: array
 * @n: length
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

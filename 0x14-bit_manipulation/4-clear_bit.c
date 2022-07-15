#include "main.h"
/**
 * clear_bit - set the value to 0 at a given location.
 * @n: pointer of given int.
 * @index: given bit location.
 *
 * Return: 1 if it worked, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = 1 << index;

	if (*n & bit)
		*n ^= bit;

	return (1);
}

#include "main.h"
/**
 * set_bit - set the value to 1 at a given location.
 * @n: pointer of given int.
 * @index: given bit location.
 *
 * Return: 1 if it worked, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = 1 << index;

	*n = (*n | bit);

	return (1);
}

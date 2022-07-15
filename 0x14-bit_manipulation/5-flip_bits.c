#include "main.h"
/**
 * flip_bits - returns the bits you would need to flip to get from one number to the other.
 * @n: first number
 * @m: second number.
 *
 * Return: Number of bits.
 */
unsigned int clear_bit(unsigned long int *n, unsigned long int m)
{
	unsigned int diff;
	int count;

	dif = (n ^ m);

	while (diff != 0)
	{
		if ((diff & 1) == 1)
			count++;
		diff >>= 1;
	}
	return (count);
}

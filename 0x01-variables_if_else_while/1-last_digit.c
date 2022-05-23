#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		x = abs(n) % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	if (n == 0)
	{
		printf("Lat digit of %d is %d and is 0\n", n, x);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}

	return (0);
}

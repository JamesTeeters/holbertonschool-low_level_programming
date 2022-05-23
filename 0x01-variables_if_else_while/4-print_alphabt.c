#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z' && x < 'e' || x > 'e' || x < 'q' || x > 'q'; x++)
	{
		putchar (x);
	}

	return (0);
}

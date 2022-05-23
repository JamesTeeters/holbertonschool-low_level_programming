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
	int y;

	for (x = 0; x <= 15; x++)
	{
		putchar (x % 10 + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}
	putchar ('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	int y;

	y = 0;
	while (y < 10)
	{
		int x;

		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
		y++;
	}
}

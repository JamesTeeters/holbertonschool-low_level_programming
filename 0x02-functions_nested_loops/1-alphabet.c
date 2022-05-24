#include <stdio.h>
/**
 * print_alphabet - Entry Point
 *
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();

	return (0);
}
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for  (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	  for  (x = 'A'; x <= 'Z'; x++)
        {
                putchar (x);
        }

	putchar ('\n');
	return (0);
}

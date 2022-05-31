#include "main.h"
#include <stdio.h>

/**
 * main - print Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz for both
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz\n");	
		}
		else
		{
		printf("%d\n", num);
		}
	}
	return (0);
}

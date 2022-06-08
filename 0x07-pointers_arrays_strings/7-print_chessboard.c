#include "main.h"

/**
 * print_chessboard - print characters of top 2 rows
 * and bottom 2 rows
 *
 * @a: array 1
 *
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}

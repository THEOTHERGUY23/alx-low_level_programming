#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: (0) Success
 */

void print_chessboard(char (*a)[8])
{
	int o;
	int x;

	for (o = 0 ; o < 8 ; o++)
	{
		for (x = 0 ; x < 8 ; x++)
			_putchar(a[o][x]);
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_triangle - entry point
 *
 * @size: int
 *
 * Return:
 */

void print_triangle(int size)
{
	int i;
	int j;
	int u;

	for (i = 1; i <= size; i++)
	{
		for (u = size; u > i; u--)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

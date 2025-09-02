#include "main.h"
/**
 * print_diagonal - entry point
 *
 * @n: int
 *
 * Return:
 */

void print_diagonal(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n >= i)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}

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
	int i = 0;
	int u;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (u = 0; u < i; u++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}

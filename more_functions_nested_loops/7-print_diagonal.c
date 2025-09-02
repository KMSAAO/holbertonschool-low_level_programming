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
	int times = 0;
	int u;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (u = 1; u < i; u++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			times++;
		}
	}
}

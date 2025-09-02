#include "main.h"
/**
 * print_line - entry point
 *
 * @n: int
 *
 * Return:
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > i)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_array - entry point
 * @n: int
 * @a: int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_number(a[i]);
	if (i != n - 1)
	{
		_putchar(',');
	    _putchar(' ');
	}
	}
	_putchar('\n');
}

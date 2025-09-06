#include "main.h"


/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
	print_number(num / 10);

	_putchar((num % 10) + '0');
}

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

#include "main.h"
/**
 * times_table - entry point
 * Return: 0
 */

void times_table(void)
{
	int row, col, mul;

	for (row = 0; row <= 9; row++)
	{
	for (col = 0; col <= 9; col++)
	{
		mul = row * col;
	if (col == 0)
	{
		_putchar(mul + '0');
	}
	else
	{
		_putchar(',');
		 _putchar(' ');
	if (mul < 10)
	{
		_putchar(' ');
		 _putchar(mul + '0');
	}
	else
	{
		_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
	}
	}
	}
	_putchar('\n');
	}
}

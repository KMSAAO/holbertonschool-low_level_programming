#include "main.h"
/**
 * print_last_digit - entry point
 * @i: int
 * Return: 0
 */

int print_last_digit(int i)
{
	int u = i % 10;

	if (u < 0)
	{
		u = -u;
		_putchar(u + '0');
	}
	else
	{
		_putchar(u + '0');
	}
	return (u);
}

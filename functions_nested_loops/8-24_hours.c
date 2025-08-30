#include "main.h"
/**
 * jack_bauer - entry point
 * Return: 0
 */

void jack_bauer(void)
{
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;
	int d4 = 0;

	while (d4 < 3)
	{
		d1 = 0;
		d2 = 0;
		d3 = 0;
	while (d3 < 10)
	{
		d1 = 0;
		d2 = 0;

	if (d4 == 2 && d3 == 4)
	{
		return;
	}
	while (d2 < 6)
	{
		d1 = 0;
	while (d1 < 10)
	{
		_putchar(d4 + '0');
		_putchar(d3 + '0');
		_putchar(':');
		_putchar(d2 + '0');
		_putchar(d1 + '0');
		_putchar('\n');
		d1++;
	}
	d2++;
	}
	d3++;
	}
	d4++;
	}
}

#include "main.h"
/**
 * more_numbers - entry point
 *
 * Return:
 */
void more_numbers(void)
{
	int times;
	int number;

	while (times <= 10)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
				_putchar((number % 10) + '0');
			}
			else
			{
				_putchar(number + '0');
			}
		}
		_putchar('\n');
		times++;
	}
}

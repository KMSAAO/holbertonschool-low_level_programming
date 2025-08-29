#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 * Description: function type 1 if is lower and 0 if its A
 * @c: its int
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

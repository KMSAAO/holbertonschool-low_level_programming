#include "main.h"
#include <ctype.h>
/**
 * _isdigit - entry point
 *
 * @c: int
 *
 * Return: 1 if is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

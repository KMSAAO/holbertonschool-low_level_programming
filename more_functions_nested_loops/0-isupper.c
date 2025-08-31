#include "main.h"
#include <ctype.h>
/**
 * _isupper - entry point
 *
 * @c: int
 * 
 * Return: 1 if is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

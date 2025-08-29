#include "main.h"
#include <ctype.h>
/**
 * _isalpha - entry point
 * Description: function type 1 if is lower and 0 if its A
 * @c: its int
 * Return: 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

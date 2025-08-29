#include "main.h"
#include <stdlib.h>
/**
 * _abs - entry point
 *
 * @i: int
 * Return: 0
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		int u = i * -1;

		return (u);
	}
	return (0);
}

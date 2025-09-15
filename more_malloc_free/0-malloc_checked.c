#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entry point
 * @b: int
 * Return: 98 if NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

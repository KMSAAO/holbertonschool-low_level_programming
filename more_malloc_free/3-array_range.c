#include "main.h"
#include <stdlib.h>
/**
 * array_range - entry point
 * @min: int
 * @max: int
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);

}

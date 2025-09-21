#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search for an integer
 * @array: the array search in
 * @size: size of element want to search
 * @cmp: function
 * Return: the index of the first elemetn and return -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || size == NULL || cmp(array) == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);

		i++;
	}

		return (-1);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars
 * @size: int
 * @c: char
 * Return: Pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}

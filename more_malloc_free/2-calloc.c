#include "main.h"
#include <stdlib.h>
/**
 * _calloc - entry point
 * @nmemb: int
 * @size: int
 * Return: pointer and NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc((nmemb * size) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; ptr[i] != '\0'; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

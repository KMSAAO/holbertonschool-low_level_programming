#include "main.h"
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: string
 * Return: NULL if str = 0 or Return array
 */

char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc((i + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}

	arr[j] = '\0';

	return (arr);

}

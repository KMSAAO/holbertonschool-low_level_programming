#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - entry point
 * @s1: char
 * @s2: char
 * @n: int
 * Return: NULL or pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, h, y;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc((i + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (y = 0; y < i; y++)
	{
		ptr[y] = s1[y];
	}
	if (n >= j)
	{
		for (h = 0; h < j ; h++)
		{
			ptr[h + y] = s2[h];
		}
	}
	else
	{
		for (h = 0; h < n; h++)
			ptr[y + h] = s2[h];
	}

	ptr[y + h] = '\0';
	return (ptr);

}

#include "main.h"
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: char
 * @s2: char
 * Return: NULL if failuer and return array
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i;
	int j;
	int f;
	int c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (NULL);
	}
	arr = malloc((i + j + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < i; f++)
		arr[f] = s1[f];

	for (c = 0; c < j; c++)
		arr[f + c] = s2[c];

	arr[f + c] = '\0';
	return (arr);
}

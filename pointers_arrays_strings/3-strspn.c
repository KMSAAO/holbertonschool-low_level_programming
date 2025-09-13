#include "main.h"
/**
 * _strspn - entry point
 * @s: char
 * @accept: char
 * Return: number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int found = 0;
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
			return (count);
		count++;
		s++;
	}
	return (count);
}

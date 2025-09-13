#include "main.h"
/**
 * _strpbrk - entry point
 * @s: char
 * @accept: char
 * Return: matches
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;

		}

		s++;
	}
	return (0);
}

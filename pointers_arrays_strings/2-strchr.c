#include "main.h"
/**
 * _strchr - entry point
 * @s: char
 * @c: char
 * Return: s or NULL if the char is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	{
		return (s);
	}
		s++;
	}
	if (*s == c)
		return (s);

	return (0);
}

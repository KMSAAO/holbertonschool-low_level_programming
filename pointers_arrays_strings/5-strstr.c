#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *needle != '\0'; i++)
	{
		if (*needle == *haystack)
		{
			return (haystack);
			needle++;
			haystack++;
		}
		else if (*needle != *haystack)
		{
			haystack++;
		}
	}
	return NULL;
}

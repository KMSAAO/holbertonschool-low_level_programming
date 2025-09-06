#include "main.h"
/**
 * rev_string - entry point
 *
 * @s: char
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int u;
	int j;

		while (s[i] != '\0')
	{
		i++;
	}

	u = 0;
	j = i - 1;

	while (u < j)
	{
		char temp = s[u];

		s[u] = s[j];
		s[j] = temp;

		u++;
		j--;
	}
}

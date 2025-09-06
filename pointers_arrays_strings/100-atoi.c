#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer value, or 0 if no valid number is found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > 214748364 || (result == 214748364 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return (2147483647)
			else
				return (-2147483647)
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	if (sign == -1)
		return (-result);
	return (result);
}

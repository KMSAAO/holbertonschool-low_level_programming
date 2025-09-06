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
	unsigned int result = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > 214748364)
			return (sign == 1 ? 2147483647 : -2147483648);
		result = result * 10 + (s[i] - '0');
		if (sign == 1 && result > 2147483647)
			return (2147483647);
		if (sign == -1 && result > 2147483648)
			return (-2147483648);
		i++;
	}

	if (sign == 1)
		return ((int)result);
	if (result == 2147483648)
		return (-2147483648);
		return (-(int)result);
}

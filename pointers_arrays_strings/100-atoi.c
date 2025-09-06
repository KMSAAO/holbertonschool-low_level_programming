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
	int digit;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (sign == 1)
		{
			if (result > 214748364 || (result == 214748364 && digit > 7))
				return (2147483647);
			result = result * 10 + digit;
		}
		else
		{
			if (result < -214748364 || (result == -214748364 && digit > 8))
				return (-2147483648);
			result = result * 10 + (s[i] - '0');
		}
		i++
	}
	if (sign == -1)
		return (-result);
	return (result);
}

#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (sign == 1 && result > (2147483647 - (s[i] - '0')) / 10)
					return (2147483647);
				if (sign == -1 && result > (2147483648U - (s[i] - '0')) / 10)
					return (-2147483648);

				result = result * 10 + (s[i] - '0');
				i++;
			}
			return (result * sign);
		}
		i++;
	}
	return (0);
}

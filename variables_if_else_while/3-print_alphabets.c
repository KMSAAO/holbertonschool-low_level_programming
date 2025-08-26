#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}

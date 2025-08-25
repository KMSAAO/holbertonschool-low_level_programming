#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int myInt;
	long int myLongInt;
	float myFloat;
	long long int myDouble;
	char myChar;

	printf("Size of a char: %lu byte(s)\n", sizeof(myChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(myLongInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(myDouble));
	printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));
	return (0);
}

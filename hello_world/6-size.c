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

	printf("Size of a char: %zu\n", sizeof(myChar));
	printf("Size of an int: %zu\n", sizeof(myInt));
	printf("Size of a long int: %zu\n", sizeof(myLongInt));
	printf("Size of a long long: %zu\n", sizeof(myDouble));
	printf("Size of a float: %zu\n", sizeof(myFloat));
	return (0);
}

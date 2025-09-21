#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

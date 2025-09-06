#include "main.h"
/**
 * swap_int - entry point
 *
 * @a: int
 *
 * @b: int
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{

	int aa = *a;
	int bb = *b;

	*a = bb;
	*b = aa;
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum
 * @a: first num
 * @b: second num
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference
 * @a: first num
 * @b: second num
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product
 * @a: first num
 * @b: second num
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first num
 * @b: second num
 * Return: the divsion of a by b
 */

int op_div(int a, int b)
{
		return (a / b);
}

/**
 * op_mod - remainder of the division
 * @a: first num
 * @b: second num
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
		return (a % b);
}

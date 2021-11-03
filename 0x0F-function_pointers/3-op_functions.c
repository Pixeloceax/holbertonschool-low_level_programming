#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - addition
 *
 * @a: first number
 * @b: 2nd number
 *Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substraction
 *
 * @a: first number
 * @b: 2nd number
 *Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication
 *
 * @a: first number
 * @b: 2nd number
 *Return: result
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division
 *
 * @a: first number
 * @b: 2nd number
 *Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - modulo
 *
 * @a: first number
 *  @b: 2nd number
 *Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: n
 * Return: calc
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, calc = 0;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		calc += va_arg(numbers, int);
	}
	va_end(numbers);
	return (calc);
}

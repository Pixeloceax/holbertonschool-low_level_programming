#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void _char(va_list arg);
void _int(va_list arg);
void _float(va_list arg);
void _string(va_list arg);

/**
 *print_all - main function
 *@format: format
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	char *k = "";

	print_tt_t f[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (f[j].IJK != NULL)
		{
			if (format[i] == *(f[j].IJK))
			{
				printf("%s", k);
				k = ", ";
				f[j].print(arg);
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
/**
 *_char - char function
 *@arg: arg
 */
void _char(va_list arg)
	{
		char charac;

		charac = va_arg(arg, int);
		printf("%c", charac);
	}
/**
 *_int - int function
 *@arg: arg
 */
void _int(va_list arg)
	{
		int integ;

		integ = va_arg(arg, int);
		printf("%d", integ);
	}
/**
 *_float - float function
 *@arg: arg
 */
void _float(va_list arg)
	{
		float float_numbers;

		float_numbers = va_arg(arg, double);
		printf("%f", float_numbers);
	}
/**
 *_string - string function
 *@arg: arg
 */
void _string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
